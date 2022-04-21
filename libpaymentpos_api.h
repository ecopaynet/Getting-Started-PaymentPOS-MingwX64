#ifndef KONAN_LIBPAYMENTPOS_H
#define KONAN_LIBPAYMENTPOS_H
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
typedef bool            libpaymentpos_KBoolean;
#else
typedef _Bool           libpaymentpos_KBoolean;
#endif
typedef unsigned short     libpaymentpos_KChar;
typedef signed char        libpaymentpos_KByte;
typedef short              libpaymentpos_KShort;
typedef int                libpaymentpos_KInt;
typedef long long          libpaymentpos_KLong;
typedef unsigned char      libpaymentpos_KUByte;
typedef unsigned short     libpaymentpos_KUShort;
typedef unsigned int       libpaymentpos_KUInt;
typedef unsigned long long libpaymentpos_KULong;
typedef float              libpaymentpos_KFloat;
typedef double             libpaymentpos_KDouble;
#ifndef _MSC_VER
typedef float __attribute__ ((__vector_size__ (16))) libpaymentpos_KVector128;
#else
#include <xmmintrin.h>
typedef __m128 libpaymentpos_KVector128;
#endif
typedef void*              libpaymentpos_KNativePtr;
struct libpaymentpos_KType;
typedef struct libpaymentpos_KType libpaymentpos_KType;

typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_kotlin_Byte;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_kotlin_Short;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_kotlin_Int;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_kotlin_Long;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_kotlin_Float;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_kotlin_Double;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_kotlin_Char;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_kotlin_Boolean;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_kotlin_Unit;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_CardReadData;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_ReadingType;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_kotlinx_serialization_internal_SerializationConstructorMarker;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_CardReadData_$serializer;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_kotlinx_serialization_descriptors_SerialDescriptor;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_kotlin_Array;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_kotlinx_serialization_encoding_Decoder;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_kotlinx_serialization_encoding_Encoder;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_CardReadData_Companion;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_kotlinx_serialization_KSerializer;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_Currency;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_kotlin_Any;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_Currency_$serializer;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_Currency_Companion;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_Device;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_DeviceType;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_DeviceSerial;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_DeviceTcpip;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_DeviceType_TCPIP;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_DeviceType_SERIAL;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_DonationResult;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResultType;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_kotlinx_datetime_LocalDateTime;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_DonationResult_$serializer;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_DonationResult_Companion;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_Environment;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_Environment_TEST;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_Environment_REAL;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_Error;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_Error_$serializer;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_Error_Companion;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_Error_Types;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_Error_Types_DEVICE_INCORRECT_DATA;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_Error_Types_DEVICE_UNABLE_TO_COMMUNICATE;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_Error_Types_DEVICE_PROTOCOL_ERROR;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_Error_Types_DEVICE_OPERATION_CANCELLED;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_Error_Types_DEVICE_UPDATE_FAILED;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_Error_Types_DEVICE_UPDATE_REBOOT;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_Error_Types_DEVICE_UPDATE_NEEDED;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_Error_Types_DEVICE_NOT_INITIALIZED;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_Error_Types_DEVICE_NOT_OPERATING;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_Error_Types_DEVICE_BUSY;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_Error_Types_DEVICE_CHANGED;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_Error_Types_UPDATE_PROTOCOL_CONNECTING_TO_HOST;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_Error_Types_UPDATE_PROTOCOL_PERFORMING_PROTOCOL;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_Error_Types_HOST_PROTOCOL_PROCESSING_INPUT_DATA;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_Error_Types_HOST_PROTOCOL_CONNECTING_TO_HOST;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_Error_Types_HOST_PROTOCOL_SENDING_INPUT_FRAME;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_Error_Types_HOST_PROTOCOL_RECEIVING_OUTPUT_FRAME;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_Error_Types_HOST_PROTOCOL_PARSING_OUTPUT_DATA;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_Error_Types_UNMANAGED_ERROR;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_Error_Types_INVALID_CARD;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_Error_Types_INVALID_BOX;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_Error_Types_CANCELLED;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_Error_Types_UNKNOWN;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_Error_Types_Companion;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_Events;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_Events_CardRead;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_Events_Initialization;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_Events_Log;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_LogLevel;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_Events_Transaction;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionRequestSignatureInformation;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_ExtraParameters;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_ExtraParameters_Initialization;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_ExtraParameters_Initialization_DEVICE_CHANGE_VALIDATION_TYPE;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_ExtraParameters_Initialization_LANGUAGE;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_ExtraParameters_Initialization_DeviceChangeValidationType;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_ExtraParameters_Initialization_DeviceChangeValidationType_NOT_ALLOW_DEVICE_CHANGE;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_ExtraParameters_Initialization_DeviceChangeValidationType_ALLOW_DEVICE_CHANGE;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_ExtraParameters_Language;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_ExtraParameters_Language_SPANISH;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_ExtraParameters_Language_ENGLISH;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_ExtraParameters_Language_CATALAN;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_ExtraParameters_Language_FRENCH;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_ExtraParameters_Language_GERMAN;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_ExtraParameters_Language_ITALIAN;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_ExtraParameters_Language_PORTUGUESE;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_ExtraParameters_Language_BASQUE;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_ExtraParameters_Language_GALICIAN;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_ExtraParameters_Language_VALENCIAN;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_ExtraParameters_Ticket;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_ExtraParameters_Ticket_HEADER_LOGO;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_ExtraParameters_Ticket_LANGUAGE;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_ExtraParameters_Transaction;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_ExtraParameters_Transaction_CUSTOMER_REFERENCE;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_ExtraParameters_Transaction_REFUND_TYPE;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_ExtraParameters_Transaction_DONATION_REQUEST;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_ExtraParameters_Transaction_SIGNATURE_CAPTURE_REQUEST;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_ExtraParameters_Transaction_LANGUAGE;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_ExtraParameters_Transaction_RefundType;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_ExtraParameters_Transaction_RefundType_STANDARD;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_ExtraParameters_Transaction_RefundType_WITHOUT_CARD_READ;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_ExtraParameters_Transaction_YesNo;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_ExtraParameters_Transaction_YesNo_YES;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_ExtraParameters_Transaction_YesNo_NO;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_Information;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_LibraryStatus;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_InitializationEventsImpl;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_LibraryStatus_UNINITIALIZED;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_LibraryStatus_READY;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_LibraryStatus_WORKING;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_LogEventsImpl;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_LogLevel_None;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_LogLevel_Verbose;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_LogLevel_Debug;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_LogLevel_Info;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_LogLevel_Warning;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_LogLevel_Error;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_LogLevel_Assert;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_PaymentPOS;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_PaymentPOS_Companion;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_kotlinx_datetime_LocalDate;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_kotlin_collections_HashMap;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionList;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_kotlin_ByteArray;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_ReadingType_MAGSTRIPE;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_ReadingType_MANUAL;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_ReadingType_CHIP;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_ReadingType_CONTACTLESS_CHIP;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_ReadingType_CONTACTLESS_MAGSTRIPE;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_ReadingType_NFC_MAGSTRIPE;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_ReadingType_NFC_CHIP;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_ReadingType_NONE;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionEventsImpl;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_kotlin_collections_List;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionType;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionRequestSignatureInformation_$serializer;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionRequestSignatureInformation_Companion;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionValidationMethod;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult_$serializer;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult_Companion;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResultType_DENIED;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResultType_ACCEPTED;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionType_SALE;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionType_REFUND;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionType_REVERSAL;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionType_PREAUTHORIZATION;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionType_PREAUTHORIZATION_CONFIRMATION;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionType_PREAUTHORIZATION_CANCELLATION;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionType_PREAUTHORIZATION_SUBSTITUTION;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionValidationMethod_WITH_PIN_SIGNATURE_NOT_NECESSARY;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionValidationMethod_WITH_PIN_REQUEST_SIGNATURE;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionValidationMethod_WITH_PIN_NO_SIGNATURE_VERIFIED_BY_DEVICE;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionValidationMethod_REQUEST_SIGNATURE;
typedef struct {
  libpaymentpos_KNativePtr pinned;
} libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionValidationMethod_NO_PIN_NO_SIGNATURE;


typedef struct {
  /* Service functions. */
  void (*DisposeStablePointer)(libpaymentpos_KNativePtr ptr);
  void (*DisposeString)(const char* string);
  libpaymentpos_KBoolean (*IsInstance)(libpaymentpos_KNativePtr ref, const libpaymentpos_KType* type);
  libpaymentpos_kref_kotlin_Byte (*createNullableByte)(libpaymentpos_KByte);
  libpaymentpos_kref_kotlin_Short (*createNullableShort)(libpaymentpos_KShort);
  libpaymentpos_kref_kotlin_Int (*createNullableInt)(libpaymentpos_KInt);
  libpaymentpos_kref_kotlin_Long (*createNullableLong)(libpaymentpos_KLong);
  libpaymentpos_kref_kotlin_Float (*createNullableFloat)(libpaymentpos_KFloat);
  libpaymentpos_kref_kotlin_Double (*createNullableDouble)(libpaymentpos_KDouble);
  libpaymentpos_kref_kotlin_Char (*createNullableChar)(libpaymentpos_KChar);
  libpaymentpos_kref_kotlin_Boolean (*createNullableBoolean)(libpaymentpos_KBoolean);
  libpaymentpos_kref_kotlin_Unit (*createNullableUnit)(void);

  /* User functions. */
  struct {
    struct {
      struct {
        struct {
          struct {
            struct {
              struct {
                libpaymentpos_KType* (*_type)(void);
                libpaymentpos_kref_com_ecopaynet_module_paymentpos_CardReadData (*CardReadData)(libpaymentpos_KInt seen1, libpaymentpos_kref_com_ecopaynet_module_paymentpos_ReadingType readingType, libpaymentpos_KBoolean isExpiredCard, const char* cardBIN, const char* serviceCode, const char* track1, const char* track2, libpaymentpos_kref_kotlinx_serialization_internal_SerializationConstructorMarker serializationConstructorMarker);
                libpaymentpos_kref_com_ecopaynet_module_paymentpos_CardReadData (*CardReadData_)();
                const char* (*get_cardBIN)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_CardReadData thiz);
                void (*set_cardBIN)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_CardReadData thiz, const char* set);
                libpaymentpos_KBoolean (*get_isExpiredCard)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_CardReadData thiz);
                void (*set_isExpiredCard)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_CardReadData thiz, libpaymentpos_KBoolean set);
                libpaymentpos_kref_com_ecopaynet_module_paymentpos_ReadingType (*get_readingType)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_CardReadData thiz);
                void (*set_readingType)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_CardReadData thiz, libpaymentpos_kref_com_ecopaynet_module_paymentpos_ReadingType set);
                const char* (*get_serviceCode)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_CardReadData thiz);
                void (*set_serviceCode)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_CardReadData thiz, const char* set);
                const char* (*get_track1)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_CardReadData thiz);
                void (*set_track1)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_CardReadData thiz, const char* set);
                const char* (*get_track2)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_CardReadData thiz);
                void (*set_track2)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_CardReadData thiz, const char* set);
                struct {
                  libpaymentpos_KType* (*_type)(void);
                  libpaymentpos_kref_com_ecopaynet_module_paymentpos_CardReadData_$serializer (*_instance)();
                  libpaymentpos_kref_kotlinx_serialization_descriptors_SerialDescriptor (*get_descriptor)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_CardReadData_$serializer thiz);
                  libpaymentpos_kref_kotlin_Array (*childSerializers)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_CardReadData_$serializer thiz);
                  libpaymentpos_kref_com_ecopaynet_module_paymentpos_CardReadData (*deserialize)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_CardReadData_$serializer thiz, libpaymentpos_kref_kotlinx_serialization_encoding_Decoder decoder);
                  void (*serialize)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_CardReadData_$serializer thiz, libpaymentpos_kref_kotlinx_serialization_encoding_Encoder encoder, libpaymentpos_kref_com_ecopaynet_module_paymentpos_CardReadData value);
                } $serializer;
                struct {
                  libpaymentpos_KType* (*_type)(void);
                  libpaymentpos_kref_com_ecopaynet_module_paymentpos_CardReadData_Companion (*_instance)();
                  libpaymentpos_kref_kotlinx_serialization_KSerializer (*serializer)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_CardReadData_Companion thiz);
                } Companion;
              } CardReadData;
              struct {
                libpaymentpos_KType* (*_type)(void);
                libpaymentpos_kref_com_ecopaynet_module_paymentpos_Currency (*Currency)(libpaymentpos_KInt seen1, const char* alpha, libpaymentpos_KInt code, const char* symbol, libpaymentpos_KInt fractionDigits, const char* description, libpaymentpos_kref_kotlinx_serialization_internal_SerializationConstructorMarker serializationConstructorMarker);
                libpaymentpos_kref_com_ecopaynet_module_paymentpos_Currency (*Currency_)(const char* alpha, libpaymentpos_KInt code, const char* symbol, libpaymentpos_KInt fractionDigits, const char* description);
                const char* (*get_alpha)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Currency thiz);
                libpaymentpos_KInt (*get_code)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Currency thiz);
                const char* (*get_description)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Currency thiz);
                libpaymentpos_KInt (*get_fractionDigits)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Currency thiz);
                const char* (*get_symbol)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Currency thiz);
                const char* (*component1)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Currency thiz);
                libpaymentpos_KInt (*component2)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Currency thiz);
                const char* (*component3)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Currency thiz);
                libpaymentpos_KInt (*component4)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Currency thiz);
                const char* (*component5)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Currency thiz);
                libpaymentpos_kref_com_ecopaynet_module_paymentpos_Currency (*copy)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Currency thiz, const char* alpha, libpaymentpos_KInt code, const char* symbol, libpaymentpos_KInt fractionDigits, const char* description);
                libpaymentpos_KBoolean (*equals)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Currency thiz, libpaymentpos_kref_kotlin_Any other);
                const char* (*getFormattedAmount)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Currency thiz, libpaymentpos_KLong amount);
                const char* (*getFormattedAmount_)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Currency thiz, libpaymentpos_KLong amount, libpaymentpos_KBoolean appendCurrencyAlpha);
                libpaymentpos_KInt (*hashCode)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Currency thiz);
                const char* (*toString)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Currency thiz);
                struct {
                  libpaymentpos_KType* (*_type)(void);
                  libpaymentpos_kref_com_ecopaynet_module_paymentpos_Currency_$serializer (*_instance)();
                  libpaymentpos_kref_kotlinx_serialization_descriptors_SerialDescriptor (*get_descriptor)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Currency_$serializer thiz);
                  libpaymentpos_kref_kotlin_Array (*childSerializers)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Currency_$serializer thiz);
                  libpaymentpos_kref_com_ecopaynet_module_paymentpos_Currency (*deserialize)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Currency_$serializer thiz, libpaymentpos_kref_kotlinx_serialization_encoding_Decoder decoder);
                  void (*serialize)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Currency_$serializer thiz, libpaymentpos_kref_kotlinx_serialization_encoding_Encoder encoder, libpaymentpos_kref_com_ecopaynet_module_paymentpos_Currency value);
                } $serializer;
                struct {
                  libpaymentpos_KType* (*_type)(void);
                  libpaymentpos_kref_com_ecopaynet_module_paymentpos_Currency_Companion (*_instance)();
                  libpaymentpos_kref_kotlinx_serialization_KSerializer (*serializer)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Currency_Companion thiz);
                } Companion;
              } Currency;
              struct {
                libpaymentpos_KType* (*_type)(void);
                libpaymentpos_kref_com_ecopaynet_module_paymentpos_Device (*Device)(const char* name, libpaymentpos_kref_com_ecopaynet_module_paymentpos_DeviceType type);
                libpaymentpos_KBoolean (*get_isOperative)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Device thiz);
                const char* (*get_manufacturerCode)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Device thiz);
                const char* (*get_manufacturerName)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Device thiz);
                const char* (*get_modelCode)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Device thiz);
                const char* (*get_modelName)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Device thiz);
                const char* (*get_name)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Device thiz);
                const char* (*get_serialNumber)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Device thiz);
                const char* (*get_softwareName)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Device thiz);
                const char* (*get_softwareVersion)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Device thiz);
                libpaymentpos_kref_com_ecopaynet_module_paymentpos_DeviceType (*get_type)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Device thiz);
              } Device;
              struct {
                libpaymentpos_KType* (*_type)(void);
                libpaymentpos_kref_com_ecopaynet_module_paymentpos_DeviceSerial (*DeviceSerial)(const char* commPort);
                libpaymentpos_kref_com_ecopaynet_module_paymentpos_DeviceSerial (*DeviceSerial_)(const char* name, const char* commPort);
                const char* (*get_commPort)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_DeviceSerial thiz);
              } DeviceSerial;
              struct {
                libpaymentpos_KType* (*_type)(void);
                libpaymentpos_kref_com_ecopaynet_module_paymentpos_DeviceTcpip (*DeviceTcpip)(const char* ipAddress, libpaymentpos_KInt port);
                libpaymentpos_kref_com_ecopaynet_module_paymentpos_DeviceTcpip (*DeviceTcpip_)(const char* name, const char* ipAddress, libpaymentpos_KInt port);
                const char* (*get_ipAddress)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_DeviceTcpip thiz);
                libpaymentpos_KInt (*get_port)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_DeviceTcpip thiz);
              } DeviceTcpip;
              struct {
                libpaymentpos_KType* (*_type)(void);
                struct {
                  libpaymentpos_kref_com_ecopaynet_module_paymentpos_DeviceType (*get)(); /* enum entry for TCPIP. */
                } TCPIP;
                struct {
                  libpaymentpos_kref_com_ecopaynet_module_paymentpos_DeviceType (*get)(); /* enum entry for SERIAL. */
                } SERIAL;
              } DeviceType;
              struct {
                libpaymentpos_KType* (*_type)(void);
                libpaymentpos_kref_com_ecopaynet_module_paymentpos_DonationResult (*DonationResult)(libpaymentpos_KInt seen1, libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResultType result, const char* merchantCode, const char* commerceName, const char* commerceNumber, libpaymentpos_kref_kotlinx_datetime_LocalDateTime datetime, libpaymentpos_KLong amount, libpaymentpos_kref_com_ecopaynet_module_paymentpos_Currency currency, const char* bankName, const char* authorizationCode, const char* operationNumber, const char* deniedCode, const char* deniedDescription, libpaymentpos_kref_kotlinx_serialization_internal_SerializationConstructorMarker serializationConstructorMarker);
                libpaymentpos_kref_com_ecopaynet_module_paymentpos_DonationResult (*DonationResult_)();
                libpaymentpos_KLong (*get_amount)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_DonationResult thiz);
                void (*set_amount)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_DonationResult thiz, libpaymentpos_KLong set);
                const char* (*get_authorizationCode)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_DonationResult thiz);
                void (*set_authorizationCode)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_DonationResult thiz, const char* set);
                const char* (*get_bankName)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_DonationResult thiz);
                void (*set_bankName)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_DonationResult thiz, const char* set);
                const char* (*get_commerceName)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_DonationResult thiz);
                void (*set_commerceName)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_DonationResult thiz, const char* set);
                const char* (*get_commerceNumber)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_DonationResult thiz);
                void (*set_commerceNumber)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_DonationResult thiz, const char* set);
                libpaymentpos_kref_com_ecopaynet_module_paymentpos_Currency (*get_currency)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_DonationResult thiz);
                void (*set_currency)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_DonationResult thiz, libpaymentpos_kref_com_ecopaynet_module_paymentpos_Currency set);
                libpaymentpos_kref_kotlinx_datetime_LocalDateTime (*get_datetime)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_DonationResult thiz);
                void (*set_datetime)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_DonationResult thiz, libpaymentpos_kref_kotlinx_datetime_LocalDateTime set);
                const char* (*get_deniedCode)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_DonationResult thiz);
                void (*set_deniedCode)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_DonationResult thiz, const char* set);
                const char* (*get_deniedDescription)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_DonationResult thiz);
                void (*set_deniedDescription)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_DonationResult thiz, const char* set);
                const char* (*get_merchantCode)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_DonationResult thiz);
                void (*set_merchantCode)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_DonationResult thiz, const char* set);
                const char* (*get_operationNumber)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_DonationResult thiz);
                void (*set_operationNumber)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_DonationResult thiz, const char* set);
                libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResultType (*get_result)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_DonationResult thiz);
                void (*set_result)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_DonationResult thiz, libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResultType set);
                struct {
                  libpaymentpos_KType* (*_type)(void);
                  libpaymentpos_kref_com_ecopaynet_module_paymentpos_DonationResult_$serializer (*_instance)();
                  libpaymentpos_kref_kotlinx_serialization_descriptors_SerialDescriptor (*get_descriptor)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_DonationResult_$serializer thiz);
                  libpaymentpos_kref_kotlin_Array (*childSerializers)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_DonationResult_$serializer thiz);
                  libpaymentpos_kref_com_ecopaynet_module_paymentpos_DonationResult (*deserialize)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_DonationResult_$serializer thiz, libpaymentpos_kref_kotlinx_serialization_encoding_Decoder decoder);
                  void (*serialize)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_DonationResult_$serializer thiz, libpaymentpos_kref_kotlinx_serialization_encoding_Encoder encoder, libpaymentpos_kref_com_ecopaynet_module_paymentpos_DonationResult value);
                } $serializer;
                struct {
                  libpaymentpos_KType* (*_type)(void);
                  libpaymentpos_kref_com_ecopaynet_module_paymentpos_DonationResult_Companion (*_instance)();
                  libpaymentpos_kref_kotlinx_serialization_KSerializer (*serializer)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_DonationResult_Companion thiz);
                } Companion;
              } DonationResult;
              struct {
                libpaymentpos_KType* (*_type)(void);
                struct {
                  libpaymentpos_kref_com_ecopaynet_module_paymentpos_Environment (*get)(); /* enum entry for TEST. */
                } TEST;
                struct {
                  libpaymentpos_kref_com_ecopaynet_module_paymentpos_Environment (*get)(); /* enum entry for REAL. */
                } REAL;
              } Environment;
              struct {
                libpaymentpos_KType* (*_type)(void);
                libpaymentpos_kref_com_ecopaynet_module_paymentpos_Error (*Error)(libpaymentpos_KInt seen1, const char* code, const char* message, libpaymentpos_kref_kotlinx_serialization_internal_SerializationConstructorMarker serializationConstructorMarker);
                libpaymentpos_kref_com_ecopaynet_module_paymentpos_Error (*Error_)(const char* code, const char* message);
                const char* (*get_code)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Error thiz);
                const char* (*get_message)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Error thiz);
                const char* (*component1)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Error thiz);
                const char* (*component2)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Error thiz);
                libpaymentpos_kref_com_ecopaynet_module_paymentpos_Error (*copy)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Error thiz, const char* code, const char* message);
                libpaymentpos_KBoolean (*equals)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Error thiz, libpaymentpos_kref_kotlin_Any other);
                libpaymentpos_KInt (*hashCode)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Error thiz);
                const char* (*toString)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Error thiz);
                struct {
                  libpaymentpos_KType* (*_type)(void);
                  libpaymentpos_kref_com_ecopaynet_module_paymentpos_Error_$serializer (*_instance)();
                  libpaymentpos_kref_kotlinx_serialization_descriptors_SerialDescriptor (*get_descriptor)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Error_$serializer thiz);
                  libpaymentpos_kref_kotlin_Array (*childSerializers)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Error_$serializer thiz);
                  libpaymentpos_kref_com_ecopaynet_module_paymentpos_Error (*deserialize)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Error_$serializer thiz, libpaymentpos_kref_kotlinx_serialization_encoding_Decoder decoder);
                  void (*serialize)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Error_$serializer thiz, libpaymentpos_kref_kotlinx_serialization_encoding_Encoder encoder, libpaymentpos_kref_com_ecopaynet_module_paymentpos_Error value);
                } $serializer;
                struct {
                  libpaymentpos_KType* (*_type)(void);
                  libpaymentpos_kref_com_ecopaynet_module_paymentpos_Error_Companion (*_instance)();
                  libpaymentpos_kref_kotlinx_serialization_KSerializer (*serializer)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Error_Companion thiz);
                } Companion;
                struct {
                  libpaymentpos_KType* (*_type)(void);
                  const char* (*get_code)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Error_Types thiz);
                  struct {
                    libpaymentpos_kref_com_ecopaynet_module_paymentpos_Error_Types (*get)(); /* enum entry for DEVICE_INCORRECT_DATA. */
                  } DEVICE_INCORRECT_DATA;
                  struct {
                    libpaymentpos_kref_com_ecopaynet_module_paymentpos_Error_Types (*get)(); /* enum entry for DEVICE_UNABLE_TO_COMMUNICATE. */
                  } DEVICE_UNABLE_TO_COMMUNICATE;
                  struct {
                    libpaymentpos_kref_com_ecopaynet_module_paymentpos_Error_Types (*get)(); /* enum entry for DEVICE_PROTOCOL_ERROR. */
                  } DEVICE_PROTOCOL_ERROR;
                  struct {
                    libpaymentpos_kref_com_ecopaynet_module_paymentpos_Error_Types (*get)(); /* enum entry for DEVICE_OPERATION_CANCELLED. */
                  } DEVICE_OPERATION_CANCELLED;
                  struct {
                    libpaymentpos_kref_com_ecopaynet_module_paymentpos_Error_Types (*get)(); /* enum entry for DEVICE_UPDATE_FAILED. */
                  } DEVICE_UPDATE_FAILED;
                  struct {
                    libpaymentpos_kref_com_ecopaynet_module_paymentpos_Error_Types (*get)(); /* enum entry for DEVICE_UPDATE_REBOOT. */
                  } DEVICE_UPDATE_REBOOT;
                  struct {
                    libpaymentpos_kref_com_ecopaynet_module_paymentpos_Error_Types (*get)(); /* enum entry for DEVICE_UPDATE_NEEDED. */
                  } DEVICE_UPDATE_NEEDED;
                  struct {
                    libpaymentpos_kref_com_ecopaynet_module_paymentpos_Error_Types (*get)(); /* enum entry for DEVICE_NOT_INITIALIZED. */
                  } DEVICE_NOT_INITIALIZED;
                  struct {
                    libpaymentpos_kref_com_ecopaynet_module_paymentpos_Error_Types (*get)(); /* enum entry for DEVICE_NOT_OPERATING. */
                  } DEVICE_NOT_OPERATING;
                  struct {
                    libpaymentpos_kref_com_ecopaynet_module_paymentpos_Error_Types (*get)(); /* enum entry for DEVICE_BUSY. */
                  } DEVICE_BUSY;
                  struct {
                    libpaymentpos_kref_com_ecopaynet_module_paymentpos_Error_Types (*get)(); /* enum entry for DEVICE_CHANGED. */
                  } DEVICE_CHANGED;
                  struct {
                    libpaymentpos_kref_com_ecopaynet_module_paymentpos_Error_Types (*get)(); /* enum entry for UPDATE_PROTOCOL_CONNECTING_TO_HOST. */
                  } UPDATE_PROTOCOL_CONNECTING_TO_HOST;
                  struct {
                    libpaymentpos_kref_com_ecopaynet_module_paymentpos_Error_Types (*get)(); /* enum entry for UPDATE_PROTOCOL_PERFORMING_PROTOCOL. */
                  } UPDATE_PROTOCOL_PERFORMING_PROTOCOL;
                  struct {
                    libpaymentpos_kref_com_ecopaynet_module_paymentpos_Error_Types (*get)(); /* enum entry for HOST_PROTOCOL_PROCESSING_INPUT_DATA. */
                  } HOST_PROTOCOL_PROCESSING_INPUT_DATA;
                  struct {
                    libpaymentpos_kref_com_ecopaynet_module_paymentpos_Error_Types (*get)(); /* enum entry for HOST_PROTOCOL_CONNECTING_TO_HOST. */
                  } HOST_PROTOCOL_CONNECTING_TO_HOST;
                  struct {
                    libpaymentpos_kref_com_ecopaynet_module_paymentpos_Error_Types (*get)(); /* enum entry for HOST_PROTOCOL_SENDING_INPUT_FRAME. */
                  } HOST_PROTOCOL_SENDING_INPUT_FRAME;
                  struct {
                    libpaymentpos_kref_com_ecopaynet_module_paymentpos_Error_Types (*get)(); /* enum entry for HOST_PROTOCOL_RECEIVING_OUTPUT_FRAME. */
                  } HOST_PROTOCOL_RECEIVING_OUTPUT_FRAME;
                  struct {
                    libpaymentpos_kref_com_ecopaynet_module_paymentpos_Error_Types (*get)(); /* enum entry for HOST_PROTOCOL_PARSING_OUTPUT_DATA. */
                  } HOST_PROTOCOL_PARSING_OUTPUT_DATA;
                  struct {
                    libpaymentpos_kref_com_ecopaynet_module_paymentpos_Error_Types (*get)(); /* enum entry for UNMANAGED_ERROR. */
                  } UNMANAGED_ERROR;
                  struct {
                    libpaymentpos_kref_com_ecopaynet_module_paymentpos_Error_Types (*get)(); /* enum entry for INVALID_CARD. */
                  } INVALID_CARD;
                  struct {
                    libpaymentpos_kref_com_ecopaynet_module_paymentpos_Error_Types (*get)(); /* enum entry for INVALID_BOX. */
                  } INVALID_BOX;
                  struct {
                    libpaymentpos_kref_com_ecopaynet_module_paymentpos_Error_Types (*get)(); /* enum entry for CANCELLED. */
                  } CANCELLED;
                  struct {
                    libpaymentpos_kref_com_ecopaynet_module_paymentpos_Error_Types (*get)(); /* enum entry for UNKNOWN. */
                  } UNKNOWN;
                  struct {
                    libpaymentpos_KType* (*_type)(void);
                    libpaymentpos_kref_com_ecopaynet_module_paymentpos_Error_Types_Companion (*_instance)();
                    libpaymentpos_kref_com_ecopaynet_module_paymentpos_Error_Types (*fromCode)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Error_Types_Companion thiz, const char* code);
                  } Companion;
                } Types;
              } Error;
              struct {
                libpaymentpos_KType* (*_type)(void);
                libpaymentpos_kref_com_ecopaynet_module_paymentpos_Events (*Events)();
                struct {
                  libpaymentpos_KType* (*_type)(void);
                  void (*onCardReadComplete)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Events_CardRead thiz, libpaymentpos_kref_com_ecopaynet_module_paymentpos_CardReadData data);
                  void (*onCardReadDisplayMessage)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Events_CardRead thiz, const char* message);
                  void (*onCardReadError)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Events_CardRead thiz, libpaymentpos_kref_com_ecopaynet_module_paymentpos_Error error);
                } CardRead;
                struct {
                  libpaymentpos_KType* (*_type)(void);
                  void (*onInitializationComplete)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Events_Initialization thiz);
                  void (*onInitializationError)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Events_Initialization thiz, libpaymentpos_kref_com_ecopaynet_module_paymentpos_Error error);
                } Initialization;
                struct {
                  libpaymentpos_KType* (*_type)(void);
                  void (*onNewMessageLogged)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Events_Log thiz, libpaymentpos_kref_com_ecopaynet_module_paymentpos_LogLevel level, const char* message);
                } Log;
                struct {
                  libpaymentpos_KType* (*_type)(void);
                  void (*onTransactionComplete)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Events_Transaction thiz, libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult result);
                  void (*onTransactionDisplayDCCMessage)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Events_Transaction thiz, const char* message);
                  void (*onTransactionDisplayMessage)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Events_Transaction thiz, const char* message);
                  void (*onTransactionError)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Events_Transaction thiz, libpaymentpos_kref_com_ecopaynet_module_paymentpos_Error error);
                  void (*onTransactionRequestSignature)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Events_Transaction thiz, libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionRequestSignatureInformation transactionRequestSignatureInformation);
                } Transaction;
              } Events;
              struct {
                libpaymentpos_KType* (*_type)(void);
                libpaymentpos_kref_com_ecopaynet_module_paymentpos_ExtraParameters (*ExtraParameters)();
                struct {
                  libpaymentpos_KType* (*_type)(void);
                  const char* (*getValue)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_ExtraParameters_Initialization thiz);
                  struct {
                    libpaymentpos_kref_com_ecopaynet_module_paymentpos_ExtraParameters_Initialization (*get)(); /* enum entry for DEVICE_CHANGE_VALIDATION_TYPE. */
                  } DEVICE_CHANGE_VALIDATION_TYPE;
                  struct {
                    libpaymentpos_kref_com_ecopaynet_module_paymentpos_ExtraParameters_Initialization (*get)(); /* enum entry for LANGUAGE. */
                  } LANGUAGE;
                  struct {
                    libpaymentpos_KType* (*_type)(void);
                    const char* (*getValue)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_ExtraParameters_Initialization_DeviceChangeValidationType thiz);
                    struct {
                      libpaymentpos_kref_com_ecopaynet_module_paymentpos_ExtraParameters_Initialization_DeviceChangeValidationType (*get)(); /* enum entry for NOT_ALLOW_DEVICE_CHANGE. */
                    } NOT_ALLOW_DEVICE_CHANGE;
                    struct {
                      libpaymentpos_kref_com_ecopaynet_module_paymentpos_ExtraParameters_Initialization_DeviceChangeValidationType (*get)(); /* enum entry for ALLOW_DEVICE_CHANGE. */
                    } ALLOW_DEVICE_CHANGE;
                  } DeviceChangeValidationType;
                } Initialization;
                struct {
                  libpaymentpos_KType* (*_type)(void);
                  const char* (*get_code)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_ExtraParameters_Language thiz);
                  const char* (*getValue)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_ExtraParameters_Language thiz);
                  struct {
                    libpaymentpos_kref_com_ecopaynet_module_paymentpos_ExtraParameters_Language (*get)(); /* enum entry for SPANISH. */
                  } SPANISH;
                  struct {
                    libpaymentpos_kref_com_ecopaynet_module_paymentpos_ExtraParameters_Language (*get)(); /* enum entry for ENGLISH. */
                  } ENGLISH;
                  struct {
                    libpaymentpos_kref_com_ecopaynet_module_paymentpos_ExtraParameters_Language (*get)(); /* enum entry for CATALAN. */
                  } CATALAN;
                  struct {
                    libpaymentpos_kref_com_ecopaynet_module_paymentpos_ExtraParameters_Language (*get)(); /* enum entry for FRENCH. */
                  } FRENCH;
                  struct {
                    libpaymentpos_kref_com_ecopaynet_module_paymentpos_ExtraParameters_Language (*get)(); /* enum entry for GERMAN. */
                  } GERMAN;
                  struct {
                    libpaymentpos_kref_com_ecopaynet_module_paymentpos_ExtraParameters_Language (*get)(); /* enum entry for ITALIAN. */
                  } ITALIAN;
                  struct {
                    libpaymentpos_kref_com_ecopaynet_module_paymentpos_ExtraParameters_Language (*get)(); /* enum entry for PORTUGUESE. */
                  } PORTUGUESE;
                  struct {
                    libpaymentpos_kref_com_ecopaynet_module_paymentpos_ExtraParameters_Language (*get)(); /* enum entry for BASQUE. */
                  } BASQUE;
                  struct {
                    libpaymentpos_kref_com_ecopaynet_module_paymentpos_ExtraParameters_Language (*get)(); /* enum entry for GALICIAN. */
                  } GALICIAN;
                  struct {
                    libpaymentpos_kref_com_ecopaynet_module_paymentpos_ExtraParameters_Language (*get)(); /* enum entry for VALENCIAN. */
                  } VALENCIAN;
                } Language;
                struct {
                  libpaymentpos_KType* (*_type)(void);
                  const char* (*getValue)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_ExtraParameters_Ticket thiz);
                  struct {
                    libpaymentpos_kref_com_ecopaynet_module_paymentpos_ExtraParameters_Ticket (*get)(); /* enum entry for HEADER_LOGO. */
                  } HEADER_LOGO;
                  struct {
                    libpaymentpos_kref_com_ecopaynet_module_paymentpos_ExtraParameters_Ticket (*get)(); /* enum entry for LANGUAGE. */
                  } LANGUAGE;
                } Ticket;
                struct {
                  libpaymentpos_KType* (*_type)(void);
                  const char* (*getValue)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_ExtraParameters_Transaction thiz);
                  struct {
                    libpaymentpos_kref_com_ecopaynet_module_paymentpos_ExtraParameters_Transaction (*get)(); /* enum entry for CUSTOMER_REFERENCE. */
                  } CUSTOMER_REFERENCE;
                  struct {
                    libpaymentpos_kref_com_ecopaynet_module_paymentpos_ExtraParameters_Transaction (*get)(); /* enum entry for REFUND_TYPE. */
                  } REFUND_TYPE;
                  struct {
                    libpaymentpos_kref_com_ecopaynet_module_paymentpos_ExtraParameters_Transaction (*get)(); /* enum entry for DONATION_REQUEST. */
                  } DONATION_REQUEST;
                  struct {
                    libpaymentpos_kref_com_ecopaynet_module_paymentpos_ExtraParameters_Transaction (*get)(); /* enum entry for SIGNATURE_CAPTURE_REQUEST. */
                  } SIGNATURE_CAPTURE_REQUEST;
                  struct {
                    libpaymentpos_kref_com_ecopaynet_module_paymentpos_ExtraParameters_Transaction (*get)(); /* enum entry for LANGUAGE. */
                  } LANGUAGE;
                  struct {
                    libpaymentpos_KType* (*_type)(void);
                    const char* (*getValue)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_ExtraParameters_Transaction_RefundType thiz);
                    struct {
                      libpaymentpos_kref_com_ecopaynet_module_paymentpos_ExtraParameters_Transaction_RefundType (*get)(); /* enum entry for STANDARD. */
                    } STANDARD;
                    struct {
                      libpaymentpos_kref_com_ecopaynet_module_paymentpos_ExtraParameters_Transaction_RefundType (*get)(); /* enum entry for WITHOUT_CARD_READ. */
                    } WITHOUT_CARD_READ;
                  } RefundType;
                  struct {
                    libpaymentpos_KType* (*_type)(void);
                    const char* (*getValue)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_ExtraParameters_Transaction_YesNo thiz);
                    struct {
                      libpaymentpos_kref_com_ecopaynet_module_paymentpos_ExtraParameters_Transaction_YesNo (*get)(); /* enum entry for YES. */
                    } YES;
                    struct {
                      libpaymentpos_kref_com_ecopaynet_module_paymentpos_ExtraParameters_Transaction_YesNo (*get)(); /* enum entry for NO. */
                    } NO;
                  } YesNo;
                } Transaction;
              } ExtraParameters;
              struct {
                libpaymentpos_KType* (*_type)(void);
                libpaymentpos_kref_com_ecopaynet_module_paymentpos_Information (*Information)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_LibraryStatus libraryStatus, const char* environment, const char* commerceName, const char* commerceAddress, const char* commerceNumber, libpaymentpos_kref_com_ecopaynet_module_paymentpos_Currency commerceCurrency, libpaymentpos_kref_com_ecopaynet_module_paymentpos_DeviceType deviceType, const char* deviceName, const char* deviceSerialNumber, const char* deviceManufacturer, const char* deviceManufacturerName, const char* deviceModel, const char* deviceModelName, const char* deviceSoftwareName, const char* deviceSoftwareVersion);
                const char* (*get_commerceAddress)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Information thiz);
                void (*set_commerceAddress)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Information thiz, const char* set);
                libpaymentpos_kref_com_ecopaynet_module_paymentpos_Currency (*get_commerceCurrency)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Information thiz);
                void (*set_commerceCurrency)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Information thiz, libpaymentpos_kref_com_ecopaynet_module_paymentpos_Currency set);
                const char* (*get_commerceName)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Information thiz);
                void (*set_commerceName)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Information thiz, const char* set);
                const char* (*get_commerceNumber)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Information thiz);
                void (*set_commerceNumber)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Information thiz, const char* set);
                const char* (*get_deviceManufacturer)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Information thiz);
                void (*set_deviceManufacturer)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Information thiz, const char* set);
                const char* (*get_deviceManufacturerName)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Information thiz);
                void (*set_deviceManufacturerName)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Information thiz, const char* set);
                const char* (*get_deviceModel)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Information thiz);
                void (*set_deviceModel)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Information thiz, const char* set);
                const char* (*get_deviceModelName)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Information thiz);
                void (*set_deviceModelName)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Information thiz, const char* set);
                const char* (*get_deviceName)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Information thiz);
                void (*set_deviceName)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Information thiz, const char* set);
                const char* (*get_deviceSerialNumber)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Information thiz);
                void (*set_deviceSerialNumber)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Information thiz, const char* set);
                const char* (*get_deviceSoftwareName)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Information thiz);
                void (*set_deviceSoftwareName)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Information thiz, const char* set);
                const char* (*get_deviceSoftwareVersion)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Information thiz);
                void (*set_deviceSoftwareVersion)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Information thiz, const char* set);
                libpaymentpos_kref_com_ecopaynet_module_paymentpos_DeviceType (*get_deviceType)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Information thiz);
                void (*set_deviceType)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Information thiz, libpaymentpos_kref_com_ecopaynet_module_paymentpos_DeviceType set);
                const char* (*get_environment)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Information thiz);
                void (*set_environment)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Information thiz, const char* set);
                libpaymentpos_kref_com_ecopaynet_module_paymentpos_LibraryStatus (*get_libraryStatus)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Information thiz);
                void (*set_libraryStatus)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Information thiz, libpaymentpos_kref_com_ecopaynet_module_paymentpos_LibraryStatus set);
                libpaymentpos_kref_com_ecopaynet_module_paymentpos_LibraryStatus (*component1)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Information thiz);
                const char* (*component10)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Information thiz);
                const char* (*component11)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Information thiz);
                const char* (*component12)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Information thiz);
                const char* (*component13)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Information thiz);
                const char* (*component14)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Information thiz);
                const char* (*component15)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Information thiz);
                const char* (*component2)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Information thiz);
                const char* (*component3)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Information thiz);
                const char* (*component4)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Information thiz);
                const char* (*component5)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Information thiz);
                libpaymentpos_kref_com_ecopaynet_module_paymentpos_Currency (*component6)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Information thiz);
                libpaymentpos_kref_com_ecopaynet_module_paymentpos_DeviceType (*component7)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Information thiz);
                const char* (*component8)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Information thiz);
                const char* (*component9)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Information thiz);
                libpaymentpos_kref_com_ecopaynet_module_paymentpos_Information (*copy)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Information thiz, libpaymentpos_kref_com_ecopaynet_module_paymentpos_LibraryStatus libraryStatus, const char* environment, const char* commerceName, const char* commerceAddress, const char* commerceNumber, libpaymentpos_kref_com_ecopaynet_module_paymentpos_Currency commerceCurrency, libpaymentpos_kref_com_ecopaynet_module_paymentpos_DeviceType deviceType, const char* deviceName, const char* deviceSerialNumber, const char* deviceManufacturer, const char* deviceManufacturerName, const char* deviceModel, const char* deviceModelName, const char* deviceSoftwareName, const char* deviceSoftwareVersion);
                libpaymentpos_KBoolean (*equals)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Information thiz, libpaymentpos_kref_kotlin_Any other);
                libpaymentpos_KInt (*hashCode)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Information thiz);
                const char* (*toString)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_Information thiz);
              } Information;
              struct {
                libpaymentpos_KType* (*_type)(void);
                libpaymentpos_kref_com_ecopaynet_module_paymentpos_InitializationEventsImpl (*InitializationEventsImpl)(void* _onInitializationComplete, void* _onInitializationError);
                void (*onInitializationComplete)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_InitializationEventsImpl thiz);
                void (*onInitializationError)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_InitializationEventsImpl thiz, libpaymentpos_kref_com_ecopaynet_module_paymentpos_Error error);
              } InitializationEventsImpl;
              struct {
                libpaymentpos_KType* (*_type)(void);
                struct {
                  libpaymentpos_kref_com_ecopaynet_module_paymentpos_LibraryStatus (*get)(); /* enum entry for UNINITIALIZED. */
                } UNINITIALIZED;
                struct {
                  libpaymentpos_kref_com_ecopaynet_module_paymentpos_LibraryStatus (*get)(); /* enum entry for READY. */
                } READY;
                struct {
                  libpaymentpos_kref_com_ecopaynet_module_paymentpos_LibraryStatus (*get)(); /* enum entry for WORKING. */
                } WORKING;
              } LibraryStatus;
              struct {
                libpaymentpos_KType* (*_type)(void);
                libpaymentpos_kref_com_ecopaynet_module_paymentpos_LogEventsImpl (*LogEventsImpl)(void* _onNewMessageLogged);
                void (*onNewMessageLogged)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_LogEventsImpl thiz, libpaymentpos_kref_com_ecopaynet_module_paymentpos_LogLevel level, const char* message);
              } LogEventsImpl;
              struct {
                libpaymentpos_KType* (*_type)(void);
                struct {
                  libpaymentpos_kref_com_ecopaynet_module_paymentpos_LogLevel (*get)(); /* enum entry for None. */
                } None;
                struct {
                  libpaymentpos_kref_com_ecopaynet_module_paymentpos_LogLevel (*get)(); /* enum entry for Verbose. */
                } Verbose;
                struct {
                  libpaymentpos_kref_com_ecopaynet_module_paymentpos_LogLevel (*get)(); /* enum entry for Debug. */
                } Debug;
                struct {
                  libpaymentpos_kref_com_ecopaynet_module_paymentpos_LogLevel (*get)(); /* enum entry for Info. */
                } Info;
                struct {
                  libpaymentpos_kref_com_ecopaynet_module_paymentpos_LogLevel (*get)(); /* enum entry for Warning. */
                } Warning;
                struct {
                  libpaymentpos_kref_com_ecopaynet_module_paymentpos_LogLevel (*get)(); /* enum entry for Error. */
                } Error;
                struct {
                  libpaymentpos_kref_com_ecopaynet_module_paymentpos_LogLevel (*get)(); /* enum entry for Assert. */
                } Assert;
              } LogLevel;
              struct {
                libpaymentpos_KType* (*_type)(void);
                libpaymentpos_kref_com_ecopaynet_module_paymentpos_PaymentPOS (*PaymentPOS)();
                struct {
                  libpaymentpos_KType* (*_type)(void);
                  libpaymentpos_kref_com_ecopaynet_module_paymentpos_PaymentPOS_Companion (*_instance)();
                  void (*addLogEventHandler)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_PaymentPOS_Companion thiz, libpaymentpos_kref_com_ecopaynet_module_paymentpos_Events_Log listener);
                  libpaymentpos_KBoolean (*cancelPreauthorization)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_PaymentPOS_Companion thiz, const char* operationNumber, const char* authorizationCode, libpaymentpos_kref_kotlinx_datetime_LocalDate transactionDate, libpaymentpos_kref_com_ecopaynet_module_paymentpos_Events_Transaction eventListener);
                  libpaymentpos_KBoolean (*cancelPreauthorization_)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_PaymentPOS_Companion thiz, const char* operationNumber, const char* authorizationCode, libpaymentpos_kref_kotlinx_datetime_LocalDate transactionDate, libpaymentpos_kref_com_ecopaynet_module_paymentpos_Events_Transaction eventListener, libpaymentpos_kref_kotlin_collections_HashMap extraParameters);
                  libpaymentpos_KBoolean (*cardRead)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_PaymentPOS_Companion thiz, libpaymentpos_kref_com_ecopaynet_module_paymentpos_Events_CardRead eventListener);
                  libpaymentpos_KBoolean (*confirmPreauthorization)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_PaymentPOS_Companion thiz, libpaymentpos_KLong amount, const char* operationNumber, const char* authorizationCode, libpaymentpos_kref_kotlinx_datetime_LocalDate transactionDate, libpaymentpos_kref_com_ecopaynet_module_paymentpos_Events_Transaction eventListener);
                  libpaymentpos_KBoolean (*confirmPreauthorization_)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_PaymentPOS_Companion thiz, libpaymentpos_KLong amount, const char* operationNumber, const char* authorizationCode, libpaymentpos_kref_kotlinx_datetime_LocalDate transactionDate, libpaymentpos_kref_com_ecopaynet_module_paymentpos_Events_Transaction eventListener, libpaymentpos_kref_kotlin_collections_HashMap extraParameters);
                  libpaymentpos_KBoolean (*creditNote)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_PaymentPOS_Companion thiz, libpaymentpos_KLong amount, libpaymentpos_kref_com_ecopaynet_module_paymentpos_Events_Transaction eventListener);
                  libpaymentpos_KBoolean (*creditNote_)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_PaymentPOS_Companion thiz, libpaymentpos_KLong amount, libpaymentpos_kref_com_ecopaynet_module_paymentpos_Events_Transaction eventListener, libpaymentpos_kref_kotlin_collections_HashMap extraParameters);
                  libpaymentpos_KBoolean (*creditNoteReversal)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_PaymentPOS_Companion thiz, libpaymentpos_KLong amount, const char* operationNumber, const char* authorizationCode, libpaymentpos_kref_kotlinx_datetime_LocalDate transactionDate, libpaymentpos_kref_com_ecopaynet_module_paymentpos_Events_Transaction eventListener);
                  const char* (*generateCardholderTransactionTicketText)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_PaymentPOS_Companion thiz, libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult transactionResult);
                  const char* (*generateCardholderTransactionTicketText_)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_PaymentPOS_Companion thiz, libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult transactionResult, libpaymentpos_kref_kotlin_collections_HashMap extraParameters);
                  const char* (*generateCommerceTransactionTicketText)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_PaymentPOS_Companion thiz, libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult transactionResult);
                  const char* (*generateCommerceTransactionTicketText_)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_PaymentPOS_Companion thiz, libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult transactionResult, libpaymentpos_kref_kotlin_collections_HashMap extraParameters);
                  libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionList (*getCommerceTransactionsList)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_PaymentPOS_Companion thiz, libpaymentpos_kref_kotlinx_datetime_LocalDateTime maxDate);
                  libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionList (*getDeviceTransactionsList)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_PaymentPOS_Companion thiz, libpaymentpos_kref_kotlinx_datetime_LocalDateTime maxDate);
                  libpaymentpos_kref_com_ecopaynet_module_paymentpos_Information (*getInformation)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_PaymentPOS_Companion thiz);
                  libpaymentpos_kref_com_ecopaynet_module_paymentpos_LibraryStatus (*getLibraryStatus)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_PaymentPOS_Companion thiz);
                  const char* (*getLibraryVersion)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_PaymentPOS_Companion thiz);
                  libpaymentpos_KBoolean (*initialize)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_PaymentPOS_Companion thiz, libpaymentpos_kref_com_ecopaynet_module_paymentpos_Device device, libpaymentpos_kref_com_ecopaynet_module_paymentpos_Events_Initialization eventListener);
                  libpaymentpos_KBoolean (*initialize_)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_PaymentPOS_Companion thiz, libpaymentpos_kref_com_ecopaynet_module_paymentpos_Device device, libpaymentpos_kref_com_ecopaynet_module_paymentpos_Events_Initialization eventListener, libpaymentpos_kref_kotlin_collections_HashMap extraParameters);
                  libpaymentpos_KBoolean (*preauthorization)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_PaymentPOS_Companion thiz, libpaymentpos_KLong amount, libpaymentpos_kref_com_ecopaynet_module_paymentpos_Events_Transaction eventListener);
                  libpaymentpos_KBoolean (*preauthorization_)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_PaymentPOS_Companion thiz, libpaymentpos_KLong amount, libpaymentpos_kref_com_ecopaynet_module_paymentpos_Events_Transaction eventListener, libpaymentpos_kref_kotlin_collections_HashMap extraParameters);
                  libpaymentpos_KBoolean (*refund)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_PaymentPOS_Companion thiz, libpaymentpos_KLong amount, const char* operationNumber, const char* authorizationCode, libpaymentpos_kref_kotlinx_datetime_LocalDate transactionDate, libpaymentpos_kref_com_ecopaynet_module_paymentpos_Events_Transaction eventListener);
                  libpaymentpos_KBoolean (*refund_)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_PaymentPOS_Companion thiz, libpaymentpos_KLong amount, const char* operationNumber, const char* authorizationCode, libpaymentpos_kref_kotlinx_datetime_LocalDate transactionDate, libpaymentpos_kref_com_ecopaynet_module_paymentpos_Events_Transaction eventListener, libpaymentpos_kref_kotlin_collections_HashMap extraParameters);
                  libpaymentpos_KBoolean (*refundReversal)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_PaymentPOS_Companion thiz, libpaymentpos_KLong amount, const char* operationNumber, const char* authorizationCode, libpaymentpos_kref_kotlinx_datetime_LocalDate transactionDate, libpaymentpos_kref_com_ecopaynet_module_paymentpos_Events_Transaction eventListener);
                  void (*removeLogEventHandler)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_PaymentPOS_Companion thiz);
                  void (*resetConfiguration)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_PaymentPOS_Companion thiz);
                  void (*returnTransactionRequestedSignature)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_PaymentPOS_Companion thiz, libpaymentpos_kref_kotlin_ByteArray signatureBitmap);
                  libpaymentpos_KBoolean (*reversal)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_PaymentPOS_Companion thiz, libpaymentpos_KLong amount, const char* operationNumber, const char* authorizationCode, libpaymentpos_kref_kotlinx_datetime_LocalDate transactionDate, libpaymentpos_kref_com_ecopaynet_module_paymentpos_Events_Transaction eventListener);
                  libpaymentpos_KBoolean (*reversal_)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_PaymentPOS_Companion thiz, libpaymentpos_KLong amount, const char* operationNumber, const char* authorizationCode, libpaymentpos_kref_kotlinx_datetime_LocalDate transactionDate, libpaymentpos_kref_com_ecopaynet_module_paymentpos_Events_Transaction eventListener, libpaymentpos_kref_kotlin_collections_HashMap extraParameters);
                  libpaymentpos_KBoolean (*sale)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_PaymentPOS_Companion thiz, libpaymentpos_KLong amount, libpaymentpos_kref_com_ecopaynet_module_paymentpos_Events_Transaction eventListener);
                  libpaymentpos_KBoolean (*sale_)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_PaymentPOS_Companion thiz, libpaymentpos_KLong amount, libpaymentpos_kref_com_ecopaynet_module_paymentpos_Events_Transaction eventListener, libpaymentpos_kref_kotlin_collections_HashMap extraParameters);
                  libpaymentpos_KBoolean (*saleReversal)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_PaymentPOS_Companion thiz, libpaymentpos_KLong amount, const char* operationNumber, const char* authorizationCode, libpaymentpos_kref_kotlinx_datetime_LocalDate transactionDate, libpaymentpos_kref_com_ecopaynet_module_paymentpos_Events_Transaction eventListener);
                  libpaymentpos_KBoolean (*setEnvironment)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_PaymentPOS_Companion thiz, libpaymentpos_kref_com_ecopaynet_module_paymentpos_Environment environment);
                  libpaymentpos_KBoolean (*setEnvironment_)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_PaymentPOS_Companion thiz, const char* environment);
                  void (*setExtraConfiguration)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_PaymentPOS_Companion thiz, const char* parameter, const char* value);
                  void (*setLanguage)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_PaymentPOS_Companion thiz, const char* languageCode);
                  libpaymentpos_KBoolean (*substitutePreauthorization)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_PaymentPOS_Companion thiz, libpaymentpos_KLong newAmount, const char* operationNumber, const char* authorizationCode, libpaymentpos_kref_kotlinx_datetime_LocalDate transactionDate, libpaymentpos_kref_com_ecopaynet_module_paymentpos_Events_Transaction eventListener);
                  libpaymentpos_KBoolean (*substitutePreauthorization_)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_PaymentPOS_Companion thiz, libpaymentpos_KLong newAmount, const char* operationNumber, const char* authorizationCode, libpaymentpos_kref_kotlinx_datetime_LocalDate transactionDate, libpaymentpos_kref_com_ecopaynet_module_paymentpos_Events_Transaction eventListener, libpaymentpos_kref_kotlin_collections_HashMap extraParameters);
                  libpaymentpos_KBoolean (*terminate)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_PaymentPOS_Companion thiz);
                } Companion;
              } PaymentPOS;
              struct {
                libpaymentpos_KType* (*_type)(void);
                struct {
                  libpaymentpos_kref_com_ecopaynet_module_paymentpos_ReadingType (*get)(); /* enum entry for MAGSTRIPE. */
                } MAGSTRIPE;
                struct {
                  libpaymentpos_kref_com_ecopaynet_module_paymentpos_ReadingType (*get)(); /* enum entry for MANUAL. */
                } MANUAL;
                struct {
                  libpaymentpos_kref_com_ecopaynet_module_paymentpos_ReadingType (*get)(); /* enum entry for CHIP. */
                } CHIP;
                struct {
                  libpaymentpos_kref_com_ecopaynet_module_paymentpos_ReadingType (*get)(); /* enum entry for CONTACTLESS_CHIP. */
                } CONTACTLESS_CHIP;
                struct {
                  libpaymentpos_kref_com_ecopaynet_module_paymentpos_ReadingType (*get)(); /* enum entry for CONTACTLESS_MAGSTRIPE. */
                } CONTACTLESS_MAGSTRIPE;
                struct {
                  libpaymentpos_kref_com_ecopaynet_module_paymentpos_ReadingType (*get)(); /* enum entry for NFC_MAGSTRIPE. */
                } NFC_MAGSTRIPE;
                struct {
                  libpaymentpos_kref_com_ecopaynet_module_paymentpos_ReadingType (*get)(); /* enum entry for NFC_CHIP. */
                } NFC_CHIP;
                struct {
                  libpaymentpos_kref_com_ecopaynet_module_paymentpos_ReadingType (*get)(); /* enum entry for NONE. */
                } NONE;
              } ReadingType;
              struct {
                libpaymentpos_KType* (*_type)(void);
                libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionEventsImpl (*TransactionEventsImpl)(void* _onTransactionRequestSignature, void* _onTransactionComplete, void* _onTransactionError, void* _onTransactionDisplayMessage, void* _onTransactionDisplayDCCMessage);
                void (*onTransactionComplete)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionEventsImpl thiz, libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult result);
                void (*onTransactionDisplayDCCMessage)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionEventsImpl thiz, const char* message);
                void (*onTransactionDisplayMessage)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionEventsImpl thiz, const char* message);
                void (*onTransactionError)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionEventsImpl thiz, libpaymentpos_kref_com_ecopaynet_module_paymentpos_Error error);
                void (*onTransactionRequestSignature)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionEventsImpl thiz, libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionRequestSignatureInformation transactionRequestSignatureInformation);
              } TransactionEventsImpl;
              struct {
                libpaymentpos_KType* (*_type)(void);
                libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionList (*TransactionList)();
                libpaymentpos_kref_kotlinx_datetime_LocalDateTime (*get_maxDate)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionList thiz);
                void (*set_maxDate)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionList thiz, libpaymentpos_kref_kotlinx_datetime_LocalDateTime set);
                libpaymentpos_kref_kotlin_collections_List (*get_transactions)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionList thiz);
                void (*set_transactions)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionList thiz, libpaymentpos_kref_kotlin_collections_List set);
              } TransactionList;
              struct {
                libpaymentpos_KType* (*_type)(void);
                libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionRequestSignatureInformation (*TransactionRequestSignatureInformation)(libpaymentpos_KInt seen1, libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionType type, libpaymentpos_kref_com_ecopaynet_module_paymentpos_ReadingType readingType, libpaymentpos_KBoolean isVISAContactless, const char* commerceName, const char* commerceAddress, const char* commerceTown, const char* commerceProvince, const char* commerceNumber, const char* serialNumber, libpaymentpos_kref_kotlinx_datetime_LocalDateTime datetime, const char* cardCardholderName, const char* cardPAN, const char* cardSequenceNumber, const char* cardAID, const char* cardAIDLabel, const char* transactionNumber, libpaymentpos_KLong amount, libpaymentpos_kref_com_ecopaynet_module_paymentpos_Currency currency, const char* bankName, const char* authorizationCode, const char* operationNumber, const char* reference, libpaymentpos_kref_kotlinx_serialization_internal_SerializationConstructorMarker serializationConstructorMarker);
                libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionRequestSignatureInformation (*TransactionRequestSignatureInformation_)();
                libpaymentpos_KLong (*get_amount)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionRequestSignatureInformation thiz);
                void (*set_amount)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionRequestSignatureInformation thiz, libpaymentpos_KLong set);
                const char* (*get_authorizationCode)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionRequestSignatureInformation thiz);
                void (*set_authorizationCode)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionRequestSignatureInformation thiz, const char* set);
                const char* (*get_bankName)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionRequestSignatureInformation thiz);
                void (*set_bankName)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionRequestSignatureInformation thiz, const char* set);
                const char* (*get_cardAID)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionRequestSignatureInformation thiz);
                void (*set_cardAID)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionRequestSignatureInformation thiz, const char* set);
                const char* (*get_cardAIDLabel)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionRequestSignatureInformation thiz);
                void (*set_cardAIDLabel)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionRequestSignatureInformation thiz, const char* set);
                const char* (*get_cardCardholderName)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionRequestSignatureInformation thiz);
                void (*set_cardCardholderName)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionRequestSignatureInformation thiz, const char* set);
                const char* (*get_cardPAN)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionRequestSignatureInformation thiz);
                void (*set_cardPAN)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionRequestSignatureInformation thiz, const char* set);
                const char* (*get_cardSequenceNumber)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionRequestSignatureInformation thiz);
                void (*set_cardSequenceNumber)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionRequestSignatureInformation thiz, const char* set);
                const char* (*get_commerceAddress)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionRequestSignatureInformation thiz);
                void (*set_commerceAddress)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionRequestSignatureInformation thiz, const char* set);
                const char* (*get_commerceName)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionRequestSignatureInformation thiz);
                void (*set_commerceName)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionRequestSignatureInformation thiz, const char* set);
                const char* (*get_commerceNumber)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionRequestSignatureInformation thiz);
                void (*set_commerceNumber)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionRequestSignatureInformation thiz, const char* set);
                const char* (*get_commerceProvince)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionRequestSignatureInformation thiz);
                void (*set_commerceProvince)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionRequestSignatureInformation thiz, const char* set);
                const char* (*get_commerceTown)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionRequestSignatureInformation thiz);
                void (*set_commerceTown)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionRequestSignatureInformation thiz, const char* set);
                libpaymentpos_kref_com_ecopaynet_module_paymentpos_Currency (*get_currency)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionRequestSignatureInformation thiz);
                void (*set_currency)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionRequestSignatureInformation thiz, libpaymentpos_kref_com_ecopaynet_module_paymentpos_Currency set);
                libpaymentpos_kref_kotlinx_datetime_LocalDateTime (*get_datetime)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionRequestSignatureInformation thiz);
                void (*set_datetime)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionRequestSignatureInformation thiz, libpaymentpos_kref_kotlinx_datetime_LocalDateTime set);
                libpaymentpos_KBoolean (*get_isVISAContactless)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionRequestSignatureInformation thiz);
                void (*set_isVISAContactless)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionRequestSignatureInformation thiz, libpaymentpos_KBoolean set);
                const char* (*get_operationNumber)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionRequestSignatureInformation thiz);
                void (*set_operationNumber)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionRequestSignatureInformation thiz, const char* set);
                libpaymentpos_kref_com_ecopaynet_module_paymentpos_ReadingType (*get_readingType)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionRequestSignatureInformation thiz);
                void (*set_readingType)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionRequestSignatureInformation thiz, libpaymentpos_kref_com_ecopaynet_module_paymentpos_ReadingType set);
                const char* (*get_reference)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionRequestSignatureInformation thiz);
                void (*set_reference)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionRequestSignatureInformation thiz, const char* set);
                const char* (*get_serialNumber)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionRequestSignatureInformation thiz);
                void (*set_serialNumber)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionRequestSignatureInformation thiz, const char* set);
                const char* (*get_transactionNumber)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionRequestSignatureInformation thiz);
                void (*set_transactionNumber)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionRequestSignatureInformation thiz, const char* set);
                libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionType (*get_type)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionRequestSignatureInformation thiz);
                void (*set_type)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionRequestSignatureInformation thiz, libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionType set);
                struct {
                  libpaymentpos_KType* (*_type)(void);
                  libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionRequestSignatureInformation_$serializer (*_instance)();
                  libpaymentpos_kref_kotlinx_serialization_descriptors_SerialDescriptor (*get_descriptor)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionRequestSignatureInformation_$serializer thiz);
                  libpaymentpos_kref_kotlin_Array (*childSerializers)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionRequestSignatureInformation_$serializer thiz);
                  libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionRequestSignatureInformation (*deserialize)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionRequestSignatureInformation_$serializer thiz, libpaymentpos_kref_kotlinx_serialization_encoding_Decoder decoder);
                  void (*serialize)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionRequestSignatureInformation_$serializer thiz, libpaymentpos_kref_kotlinx_serialization_encoding_Encoder encoder, libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionRequestSignatureInformation value);
                } $serializer;
                struct {
                  libpaymentpos_KType* (*_type)(void);
                  libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionRequestSignatureInformation_Companion (*_instance)();
                  libpaymentpos_kref_kotlinx_serialization_KSerializer (*serializer)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionRequestSignatureInformation_Companion thiz);
                } Companion;
              } TransactionRequestSignatureInformation;
              struct {
                libpaymentpos_KType* (*_type)(void);
                libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult (*TransactionResult)(libpaymentpos_KInt seen1, libpaymentpos_KInt seen2, libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResultType result, libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionType type, libpaymentpos_kref_com_ecopaynet_module_paymentpos_ReadingType readingType, libpaymentpos_KBoolean isVISAContactless, const char* merchantCode, const char* commerceName, const char* commerceAddress, const char* commerceTown, const char* commerceProvince, const char* commerceNumber, const char* serialNumber, libpaymentpos_kref_kotlinx_datetime_LocalDateTime datetime, const char* cardCardholderName, const char* cardPAN, const char* cardSequenceNumber, const char* cardAID, const char* cardAIDLabel, const char* transactionNumber, const char* terminalType, libpaymentpos_KBoolean isPINOnlineRequested, libpaymentpos_KLong amount, libpaymentpos_kref_com_ecopaynet_module_paymentpos_Currency currency, const char* bankName, const char* arcCode, const char* authorizationCode, const char* operationNumber, libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionValidationMethod validationMethod, libpaymentpos_kref_kotlin_ByteArray signatureBitmap, const char* transactionMethod, libpaymentpos_kref_kotlin_Long dccAmount, libpaymentpos_kref_com_ecopaynet_module_paymentpos_Currency dccCurrency, const char* dccMessage, const char* reference, const char* deniedCode, const char* deniedDescription, libpaymentpos_KBoolean isGeneratedByAPI, const char* transactionHash, libpaymentpos_kref_com_ecopaynet_module_paymentpos_DonationResult donationResult, libpaymentpos_kref_kotlinx_serialization_internal_SerializationConstructorMarker serializationConstructorMarker);
                libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult (*TransactionResult_)();
                libpaymentpos_KLong (*get_amount)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult thiz);
                void (*set_amount)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult thiz, libpaymentpos_KLong set);
                const char* (*get_arcCode)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult thiz);
                void (*set_arcCode)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult thiz, const char* set);
                const char* (*get_authorizationCode)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult thiz);
                void (*set_authorizationCode)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult thiz, const char* set);
                const char* (*get_bankName)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult thiz);
                void (*set_bankName)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult thiz, const char* set);
                const char* (*get_cardAID)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult thiz);
                void (*set_cardAID)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult thiz, const char* set);
                const char* (*get_cardAIDLabel)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult thiz);
                void (*set_cardAIDLabel)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult thiz, const char* set);
                const char* (*get_cardCardholderName)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult thiz);
                void (*set_cardCardholderName)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult thiz, const char* set);
                const char* (*get_cardPAN)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult thiz);
                void (*set_cardPAN)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult thiz, const char* set);
                const char* (*get_cardSequenceNumber)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult thiz);
                void (*set_cardSequenceNumber)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult thiz, const char* set);
                const char* (*get_commerceAddress)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult thiz);
                void (*set_commerceAddress)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult thiz, const char* set);
                const char* (*get_commerceName)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult thiz);
                void (*set_commerceName)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult thiz, const char* set);
                const char* (*get_commerceNumber)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult thiz);
                void (*set_commerceNumber)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult thiz, const char* set);
                const char* (*get_commerceProvince)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult thiz);
                void (*set_commerceProvince)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult thiz, const char* set);
                const char* (*get_commerceTown)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult thiz);
                void (*set_commerceTown)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult thiz, const char* set);
                libpaymentpos_kref_com_ecopaynet_module_paymentpos_Currency (*get_currency)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult thiz);
                void (*set_currency)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult thiz, libpaymentpos_kref_com_ecopaynet_module_paymentpos_Currency set);
                libpaymentpos_kref_kotlinx_datetime_LocalDateTime (*get_datetime)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult thiz);
                void (*set_datetime)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult thiz, libpaymentpos_kref_kotlinx_datetime_LocalDateTime set);
                libpaymentpos_kref_kotlin_Long (*get_dccAmount)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult thiz);
                void (*set_dccAmount)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult thiz, libpaymentpos_kref_kotlin_Long set);
                libpaymentpos_kref_com_ecopaynet_module_paymentpos_Currency (*get_dccCurrency)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult thiz);
                void (*set_dccCurrency)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult thiz, libpaymentpos_kref_com_ecopaynet_module_paymentpos_Currency set);
                const char* (*get_dccMessage)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult thiz);
                void (*set_dccMessage)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult thiz, const char* set);
                const char* (*get_deniedCode)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult thiz);
                void (*set_deniedCode)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult thiz, const char* set);
                const char* (*get_deniedDescription)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult thiz);
                void (*set_deniedDescription)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult thiz, const char* set);
                libpaymentpos_kref_com_ecopaynet_module_paymentpos_DonationResult (*get_donationResult)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult thiz);
                void (*set_donationResult)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult thiz, libpaymentpos_kref_com_ecopaynet_module_paymentpos_DonationResult set);
                libpaymentpos_KBoolean (*get_isGeneratedByAPI)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult thiz);
                void (*set_isGeneratedByAPI)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult thiz, libpaymentpos_KBoolean set);
                libpaymentpos_KBoolean (*get_isPINOnlineRequested)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult thiz);
                void (*set_isPINOnlineRequested)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult thiz, libpaymentpos_KBoolean set);
                libpaymentpos_KBoolean (*get_isVISAContactless)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult thiz);
                void (*set_isVISAContactless)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult thiz, libpaymentpos_KBoolean set);
                const char* (*get_merchantCode)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult thiz);
                void (*set_merchantCode)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult thiz, const char* set);
                const char* (*get_operationNumber)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult thiz);
                void (*set_operationNumber)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult thiz, const char* set);
                libpaymentpos_kref_com_ecopaynet_module_paymentpos_ReadingType (*get_readingType)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult thiz);
                void (*set_readingType)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult thiz, libpaymentpos_kref_com_ecopaynet_module_paymentpos_ReadingType set);
                const char* (*get_reference)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult thiz);
                void (*set_reference)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult thiz, const char* set);
                libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResultType (*get_result)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult thiz);
                void (*set_result)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult thiz, libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResultType set);
                const char* (*get_serialNumber)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult thiz);
                void (*set_serialNumber)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult thiz, const char* set);
                libpaymentpos_kref_kotlin_ByteArray (*get_signatureBitmap)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult thiz);
                void (*set_signatureBitmap)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult thiz, libpaymentpos_kref_kotlin_ByteArray set);
                const char* (*get_terminalType)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult thiz);
                void (*set_terminalType)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult thiz, const char* set);
                const char* (*get_transactionHash)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult thiz);
                void (*set_transactionHash)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult thiz, const char* set);
                const char* (*get_transactionMethod)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult thiz);
                void (*set_transactionMethod)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult thiz, const char* set);
                const char* (*get_transactionNumber)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult thiz);
                void (*set_transactionNumber)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult thiz, const char* set);
                libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionType (*get_type)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult thiz);
                void (*set_type)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult thiz, libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionType set);
                libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionValidationMethod (*get_validationMethod)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult thiz);
                void (*set_validationMethod)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult thiz, libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionValidationMethod set);
                struct {
                  libpaymentpos_KType* (*_type)(void);
                  libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult_$serializer (*_instance)();
                  libpaymentpos_kref_kotlinx_serialization_descriptors_SerialDescriptor (*get_descriptor)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult_$serializer thiz);
                  libpaymentpos_kref_kotlin_Array (*childSerializers)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult_$serializer thiz);
                  libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult (*deserialize)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult_$serializer thiz, libpaymentpos_kref_kotlinx_serialization_encoding_Decoder decoder);
                  void (*serialize)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult_$serializer thiz, libpaymentpos_kref_kotlinx_serialization_encoding_Encoder encoder, libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult value);
                } $serializer;
                struct {
                  libpaymentpos_KType* (*_type)(void);
                  libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult_Companion (*_instance)();
                  libpaymentpos_kref_kotlinx_serialization_KSerializer (*serializer)(libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult_Companion thiz);
                } Companion;
              } TransactionResult;
              struct {
                libpaymentpos_KType* (*_type)(void);
                struct {
                  libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResultType (*get)(); /* enum entry for DENIED. */
                } DENIED;
                struct {
                  libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResultType (*get)(); /* enum entry for ACCEPTED. */
                } ACCEPTED;
              } TransactionResultType;
              struct {
                libpaymentpos_KType* (*_type)(void);
                struct {
                  libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionType (*get)(); /* enum entry for SALE. */
                } SALE;
                struct {
                  libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionType (*get)(); /* enum entry for REFUND. */
                } REFUND;
                struct {
                  libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionType (*get)(); /* enum entry for REVERSAL. */
                } REVERSAL;
                struct {
                  libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionType (*get)(); /* enum entry for PREAUTHORIZATION. */
                } PREAUTHORIZATION;
                struct {
                  libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionType (*get)(); /* enum entry for PREAUTHORIZATION_CONFIRMATION. */
                } PREAUTHORIZATION_CONFIRMATION;
                struct {
                  libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionType (*get)(); /* enum entry for PREAUTHORIZATION_CANCELLATION. */
                } PREAUTHORIZATION_CANCELLATION;
                struct {
                  libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionType (*get)(); /* enum entry for PREAUTHORIZATION_SUBSTITUTION. */
                } PREAUTHORIZATION_SUBSTITUTION;
              } TransactionType;
              struct {
                libpaymentpos_KType* (*_type)(void);
                struct {
                  libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionValidationMethod (*get)(); /* enum entry for WITH_PIN_SIGNATURE_NOT_NECESSARY. */
                } WITH_PIN_SIGNATURE_NOT_NECESSARY;
                struct {
                  libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionValidationMethod (*get)(); /* enum entry for WITH_PIN_REQUEST_SIGNATURE. */
                } WITH_PIN_REQUEST_SIGNATURE;
                struct {
                  libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionValidationMethod (*get)(); /* enum entry for WITH_PIN_NO_SIGNATURE_VERIFIED_BY_DEVICE. */
                } WITH_PIN_NO_SIGNATURE_VERIFIED_BY_DEVICE;
                struct {
                  libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionValidationMethod (*get)(); /* enum entry for REQUEST_SIGNATURE. */
                } REQUEST_SIGNATURE;
                struct {
                  libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionValidationMethod (*get)(); /* enum entry for NO_PIN_NO_SIGNATURE. */
                } NO_PIN_NO_SIGNATURE;
              } TransactionValidationMethod;
              struct {
                void (*addExtraParametersItem)(libpaymentpos_kref_kotlin_collections_HashMap extraParameters, const char* key, const char* value);
                libpaymentpos_kref_kotlinx_datetime_LocalDate (*convertLocalDateTimeToLocalDate)(libpaymentpos_kref_kotlinx_datetime_LocalDateTime localDateTime);
                const char* (*getStringListElement)(libpaymentpos_kref_kotlin_collections_List list, libpaymentpos_KInt index);
                libpaymentpos_KInt (*getStringListSize)(libpaymentpos_kref_kotlin_collections_List list);
                libpaymentpos_kref_kotlin_collections_HashMap (*newExtraParameters)();
                libpaymentpos_kref_kotlinx_datetime_LocalDate (*newLocalDate)(libpaymentpos_KInt year, libpaymentpos_KInt month, libpaymentpos_KInt day);
                libpaymentpos_kref_com_ecopaynet_module_paymentpos_Error (*unwrapErrorPointer)(void* ptr);
                libpaymentpos_kref_com_ecopaynet_module_paymentpos_LogLevel (*unwrapLogLevelPointer)(void* ptr);
                libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionRequestSignatureInformation (*unwrapTransactionRequestSignatureInformationPointer)(void* ptr);
                libpaymentpos_kref_com_ecopaynet_module_paymentpos_TransactionResult (*unwrapTransactionResultPointer)(void* ptr);
              } NativeTools;
            } paymentpos;
          } module;
        } ecopaynet;
      } com;
    } root;
  } kotlin;
} libpaymentpos_ExportedSymbols;
extern libpaymentpos_ExportedSymbols* libpaymentpos_symbols(void);
#ifdef __cplusplus
}  /* extern "C" */
#endif
#endif  /* KONAN_LIBPAYMENTPOS_H */
