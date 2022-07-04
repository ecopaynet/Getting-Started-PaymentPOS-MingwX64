#include <iostream>
#include "libpaymentpos_api.h"
#include <chrono>
#include <thread>

using std::endl;

libpaymentpos_ExportedSymbols* lib;
libpaymentpos_kref_com_ecopaynet_module_paymentpos_PaymentPOS_Companion paymentPOS;

bool waitInitialization = true;
bool waitTransaction = true;
libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult lastSaleTransactionResult = { .pinned = NULL };

void onNewMessageLogged(void* thiz, void* level, const char* message) {
    std::cout << "[LOG] " << message << endl;
}

void onInitializationComplete(void* thiz) {
    std::cout << "Initialization complete!" << endl;
    waitInitialization = false;
}

void onInitializationError(void* thiz, void* errorPtr) {
    libpaymentpos_kref_com_ecopaynet_module_paymentpos_Error error = lib->kotlin.root.com.ecopaynet.module.paymentpos.NativeTools.unwrapErrorPointer(errorPtr);

    const char *errorCode = lib->kotlin.root.com.ecopaynet.module.paymentpos.Error.get_code(error);
    const char* errorMessage = lib->kotlin.root.com.ecopaynet.module.paymentpos.Error.get_message(error);

    std::cout << "Initialization Error: (" << errorCode << ") " << errorMessage << endl;
    waitInitialization = false;
}

void onTransactionComplete(void* thiz, void* transactionResultPtr) {
    std::cout << "Transaction complete!" << endl;

    libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult transactionResult = lib->kotlin.root.com.ecopaynet.module.paymentpos.NativeTools.unwrapTransactionResultPointer(transactionResultPtr);

    const char *ticketCommerce = lib->kotlin.root.com.ecopaynet.module.paymentpos.PaymentPOS.Companion.generateCommerceTransactionTicketText(paymentPOS, transactionResult);
    if (ticketCommerce != NULL) {
        std::cout << ticketCommerce << endl;
    }

    lastSaleTransactionResult.pinned = transactionResult.pinned;
    
    waitTransaction = false;
}

void onTransactionError(void* thiz, void* errorPtr) {
    libpaymentpos_kref_com_ecopaynet_module_paymentpos_Error error = lib->kotlin.root.com.ecopaynet.module.paymentpos.NativeTools.unwrapErrorPointer(errorPtr);

    const char* errorCode = lib->kotlin.root.com.ecopaynet.module.paymentpos.Error.get_code(error);
    const char* errorMessage = lib->kotlin.root.com.ecopaynet.module.paymentpos.Error.get_message(error);

    std::cout << "Transaction Error: (" << errorCode << ") " << errorMessage << endl;
    waitTransaction = false;
}

void onTransactionDisplayMessage(void* thiz, const char* message) {
    std::cout << "[DISPLAY] " << message << endl;
}

void onTransactionRequestSignature(void* thiz, void* transactionRequestSignatureInformation) {
    std::cout << "onTransactionRequestSignature" << endl;
    libpaymentpos_kref_kotlin_ByteArray signatureBitmap = { .pinned = NULL }; //Signature not performed
    lib->kotlin.root.com.ecopaynet.module.paymentpos.PaymentPOS.Companion.returnTransactionRequestedSignature(paymentPOS, signatureBitmap);
}

void onTransactionDisplayDCCMessage(void* thiz, const char* message) {
    std::cout << "[DCC] " << message << endl;
}

bool initialization() {
    lib->kotlin.root.com.ecopaynet.module.paymentpos.PaymentPOS.Companion.setEnvironment(paymentPOS, lib->kotlin.root.com.ecopaynet.module.paymentpos.Environment.TEST.get()); //Must be REAL for production

    libpaymentpos_kref_com_ecopaynet_module_paymentpos_LogEventsImpl logEventsImpl = lib->kotlin.root.com.ecopaynet.module.paymentpos.LogEventsImpl.LogEventsImpl((void*)&onNewMessageLogged);
    libpaymentpos_kref_com_ecopaynet_module_paymentpos_Events_Log logEventsListener = { .pinned = logEventsImpl.pinned };
    lib->kotlin.root.com.ecopaynet.module.paymentpos.PaymentPOS.Companion.addLogEventHandler(paymentPOS, logEventsListener);

    libpaymentpos_kref_com_ecopaynet_module_paymentpos_DeviceTcpip device = lib->kotlin.root.com.ecopaynet.module.paymentpos.DeviceTcpip.DeviceTcpip("192.168.1.123", 5556);
    //libpaymentpos_kref_com_ecopaynet_module_paymentpos_DeviceSerial device = lib->kotlin.root.com.ecopaynet.module.paymentpos.DeviceSerial.DeviceSerial("/dev/ttyACM0");
    libpaymentpos_kref_com_ecopaynet_module_paymentpos_Device deviceCast = { .pinned = device.pinned };

    libpaymentpos_kref_com_ecopaynet_module_paymentpos_InitializationEventsImpl initializationEventsImpl = lib->kotlin.root.com.ecopaynet.module.paymentpos.InitializationEventsImpl.InitializationEventsImpl((void*)&onInitializationComplete, (void*)&onInitializationError);
    libpaymentpos_kref_com_ecopaynet_module_paymentpos_Events_Initialization initializationEventsListener = { .pinned = initializationEventsImpl.pinned };

    libpaymentpos_kref_kotlin_collections_HashMap extraParameters = lib->kotlin.root.com.ecopaynet.module.paymentpos.NativeTools.newExtraParameters();

    if (lib->kotlin.root.com.ecopaynet.module.paymentpos.PaymentPOS.Companion.initialize_(paymentPOS, deviceCast, initializationEventsListener, extraParameters)) {
        std::cout << "Initializing library..." << endl;
        while (waitInitialization) {
            std::this_thread::sleep_for(std::chrono::milliseconds(100));
        }
        return true;
    }
    else {
        std::cout << "Unable to start initialization" << endl;
        return false;
    }
}

bool sale(long amount) {
    waitTransaction = true;

    libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionEventsImpl transactionEventsImpl = lib->kotlin.root.com.ecopaynet.module.paymentpos.TransactionEventsImpl.TransactionEventsImpl((void*)&onTransactionRequestSignature, (void*)&onTransactionComplete, (void*)&onTransactionError, (void*)&onTransactionDisplayMessage, (void*)&onTransactionDisplayDCCMessage);
    libpaymentpos_kref_com_ecopaynet_module_paymentpos_Events_Transaction transactionEventsListener = { .pinned = transactionEventsImpl.pinned };

    if (lib->kotlin.root.com.ecopaynet.module.paymentpos.PaymentPOS.Companion.sale(paymentPOS, amount, transactionEventsListener)) {
        std::cout << "Performing sale..." << endl;
        while (waitTransaction) {
            std::this_thread::sleep_for(std::chrono::milliseconds(100));
        }

        //Save accepted transaction result to perform refund
        if (lastSaleTransactionResult.pinned != NULL) {
            libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResultType result = lib->kotlin.root.com.ecopaynet.module.paymentpos.TransactionResult.get_result(lastSaleTransactionResult);
            if (lib->kotlin.root.com.ecopaynet.module.paymentpos.TransactionResultType.ACCEPTED.get().pinned == result.pinned) {                
                return true;
            }
            else {
                std::cout << "Transaction denied" << endl;
            }
        }
    }
    else {
        std::cout << "Unable to perform sale" << endl;        
    }
    return false;
}

bool refundSale(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult transactionResult) {
    waitTransaction = true;

    libpaymentpos_KLong amount = lib->kotlin.root.com.ecopaynet.module.paymentpos.TransactionResult.get_amount(transactionResult);
    const char* operationNumber = lib->kotlin.root.com.ecopaynet.module.paymentpos.TransactionResult.get_operationNumber(transactionResult);
    const char* authorizationCode = lib->kotlin.root.com.ecopaynet.module.paymentpos.TransactionResult.get_authorizationCode(transactionResult);
    libpaymentpos_kref_kotlinx_datetime_LocalDateTime transactionLocalDateTime = lib->kotlin.root.com.ecopaynet.module.paymentpos.TransactionResult.get_datetime(transactionResult);
    libpaymentpos_kref_kotlinx_datetime_LocalDate transactionLocalDate = lib->kotlin.root.com.ecopaynet.module.paymentpos.NativeTools.convertLocalDateTimeToLocalDate(transactionLocalDateTime);

    libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionEventsImpl transactionEventsImpl = lib->kotlin.root.com.ecopaynet.module.paymentpos.TransactionEventsImpl.TransactionEventsImpl((void*)&onTransactionRequestSignature, (void*)&onTransactionComplete, (void*)&onTransactionError, (void*)&onTransactionDisplayMessage, (void*)&onTransactionDisplayDCCMessage);
    libpaymentpos_kref_com_ecopaynet_module_paymentpos_Events_Transaction transactionEventsListener = { .pinned = transactionEventsImpl.pinned };

    if (lib->kotlin.root.com.ecopaynet.module.paymentpos.PaymentPOS.Companion.refund(paymentPOS, amount, operationNumber, authorizationCode, transactionLocalDate, transactionEventsListener)) {
        std::cout << "Performing refund..." << endl;
        while (waitTransaction) {
            std::this_thread::sleep_for(std::chrono::milliseconds(100));
        }
    }
    else {
        std::cout << "Unable to perform refund" << endl;
    }
    return false;
}

int main()
{
    lib = libpaymentpos_symbols();
    paymentPOS = lib->kotlin.root.com.ecopaynet.module.paymentpos.PaymentPOS.Companion._instance();

    std::cout << "PaymentPOS v" << lib->kotlin.root.com.ecopaynet.module.paymentpos.PaymentPOS.Companion.getLibraryVersion(paymentPOS) << endl;

    if (initialization()) {
        if (sale(100)) {
            std::this_thread::sleep_for(std::chrono::milliseconds(5000));
            refundSale(lastSaleTransactionResult);
        }
    }

    std::cout << "The End" << endl;
}