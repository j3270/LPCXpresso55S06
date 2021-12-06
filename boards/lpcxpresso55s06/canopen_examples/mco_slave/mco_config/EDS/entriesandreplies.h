// Entries and Replies
// Generated by CANopen Architect Professional 9.10.5971 on 10/16/2020 1:02:37 AM
// Generated from project E:\ESA_new\MicroCANopenPlus\trunk\MCO_CiA401_LPC54xxx_MCUX_SDK\Example-Config\EDS\CANopen_NXP_SDK_Device.cax
// Generated from EDS 'CANopen_NXP_SDK_CiA401' 10-16-2020 01:00AM by Pf
// Use with MicroCANopen Plus CANopen stack
// For more information visit www.esacademy.com and www.microcanopen.com

// Check for warnings below before using this file

#ifndef _ENTRIESANDREPLIESH_
#define _ENTRIESANDREPLIESH_

// compatibility define for stack versions 7.00 and 8.00
#ifndef COFD
#define COFD 0x00
#endif

// Number of device type values
#define OD_1000H_NUM 1

// Device type values
#define OD_1000H_LIST \
  0x00000191L, /* [0x1000,0x00] Device Type (Unsigned32) */ \

// Define IGNORE_AUTO_SERIAL if the application or stack defines the serial number

#ifndef IGNORE_AUTO_SERIAL
#define SDOREPLYSERIAL(index,sub,len,val) SDOREPLY(index,sub,len,val)
#else
#define SDOREPLYSERIAL(index,sub,len,val)
#endif

// WARNING - below is a best guess as to which entries are really constants
// Comment out entries that are changed by the application/stack

#define SDOREPLY_ENTRIES \
/* [0x1000,0x00] Device Type (Unsigned32) */ \
SDOREPLY(0x1000, 0x00, 4, OD_DEVICE_TYPE), \
/* [0x1005,0x00] COB-ID SYNC (Unsigned32) */ \
SDOREPLY(0x1005, 0x00, 4, 0x00000080L), \
/* [0x1014,0x00] COB-ID EMCY (Unsigned32) */ \
SDOREPLY(0x1014, 0x00, 4, DEFAULT_EMCY_COBID), \
/* [0x1015,0x00] Inhibit Time Emergency (Unsigned16) */ \
SDOREPLY(0x1015, 0x00, 2, 0x00000064L), \
/* [0x1016,0x00] Consumer Heartbeat Time - Highest Subindex (Unsigned8) */ \
SDOREPLY(0x1016, 0x00, 1, 0x00000003L), \
/* [0x1016,0x01] Consumer Heartbeat Time - Consumer Heartbeat Time 1 (Unsigned32) */ \
SDOREPLY(0x1016, 0x01, 4, 0x000103E8L), \
/* [0x1016,0x02] Consumer Heartbeat Time - Consumer Heartbeat Time 2 (Unsigned32) */ \
SDOREPLY(0x1016, 0x02, 4, 0x000203E8L), \
/* [0x1016,0x03] Consumer Heartbeat Time - Consumer Heartbeat Time 3 (Unsigned32) */ \
SDOREPLY(0x1016, 0x03, 4, 0x000303E8L), \
/* [0x1017,0x00] Producer Heartbeat Time (Unsigned16) */ \
SDOREPLY(0x1017, 0x00, 2, 0x000003E8L), \
/* [0x1018,0x00] Identity Object - Highest Subindex (Unsigned8) */ \
SDOREPLY(0x1018, 0x00, 1, 0x00000004L), \
/* [0x1018,0x01] Identity Object - Vendor ID (Unsigned32) */ \
SDOREPLY(0x1018, 0x01, 4, OD_VENDOR_ID), \
/* [0x1018,0x02] Identity Object - Product Code (Unsigned32) */ \
SDOREPLY(0x1018, 0x02, 4, OD_PRODUCT_CODE), \
/* [0x1018,0x03] Identity Object - Revision number (Unsigned32) */ \
SDOREPLY(0x1018, 0x03, 4, OD_REVISION), \
/* [0x1018,0x04] Identity Object - Serial number (Unsigned32) */ \
SDOREPLYSERIAL(0x1018, 0x04, 4, OD_SERIAL_NUMBER), \
/* [0x1019,0x00] SYNC counter overflow value (Unsigned8) */ \
SDOREPLY(0x1019, 0x00, 1, 0x00000000L), \
\
/* PDO parameters are in Object Dictionary */ \
\
/* RPDO communication parameters */ \
/* [0x1400,0x00] Receive PDO Communication Parameter - Highest Subindex (Unsigned8) */ \
SDOREPLY(0x1400, 0x00, 1, 0x00000002L), \
/* [0x1400,0x01] Receive PDO Communication Parameter - COB-ID (Unsigned32) */ \
SDOREPLY(0x1400, 0x01, 4, 0x00000000L), \
/* [0x1400,0x02] Receive PDO Communication Parameter - Transmission Type (Unsigned8) */ \
SDOREPLY(0x1400, 0x02, 1, 0x000000FFL), \
/* [0x1401,0x00] Receive PDO Communication Parameter - Highest Subindex (Unsigned8) */ \
SDOREPLY(0x1401, 0x00, 1, 0x00000002L), \
/* [0x1401,0x01] Receive PDO Communication Parameter - COB-ID (Unsigned32) */ \
SDOREPLY(0x1401, 0x01, 4, 0x00000000L), \
/* [0x1401,0x02] Receive PDO Communication Parameter - Transmission Type (Unsigned8) */ \
SDOREPLY(0x1401, 0x02, 1, 0x000000FFL), \
\
/* RPDO mapping parameters */ \
/* [0x1600,0x00] Receive PDO Mapping Parameter - Highest Subindex (Unsigned8) */ \
SDOREPLY(0x1600, 0x00, 1, 0x00000004L), \
/* [0x1600,0x01] Receive PDO Mapping Parameter - PDO Mapping Entry (Unsigned32) */ \
SDOREPLY(0x1600, 0x01, 4, 0x62000108L), \
/* [0x1600,0x02] Receive PDO Mapping Parameter - PDO Mapping Entry (Unsigned32) */ \
SDOREPLY(0x1600, 0x02, 4, 0x62000208L), \
/* [0x1600,0x03] Receive PDO Mapping Parameter - PDO Mapping Entry (Unsigned32) */ \
SDOREPLY(0x1600, 0x03, 4, 0x62000308L), \
/* [0x1600,0x04] Receive PDO Mapping Parameter - PDO Mapping Entry (Unsigned32) */ \
SDOREPLY(0x1600, 0x04, 4, 0x62000408L), \
/* [0x1601,0x00] Receive PDO Mapping Parameter - Highest Subindex (Unsigned8) */ \
SDOREPLY(0x1601, 0x00, 1, 0x00000002L), \
/* [0x1601,0x01] Receive PDO Mapping Parameter - PDO Mapping Entry (Unsigned32) */ \
SDOREPLY(0x1601, 0x01, 4, 0x64110110L), \
/* [0x1601,0x02] Receive PDO Mapping Parameter - PDO Mapping Entry (Unsigned32) */ \
SDOREPLY(0x1601, 0x02, 4, 0x64110210L), \
\
/* TPDO communication parameters */ \
/* [0x1800,0x00] Transmit PDO Communication Parameter - Highest Subindex (Unsigned8) */ \
SDOREPLY(0x1800, 0x00, 1, 0x00000006L), \
/* [0x1800,0x01] Transmit PDO Communication Parameter - COB-ID (Unsigned32) */ \
SDOREPLY(0x1800, 0x01, 4, 0x00000000L), \
/* [0x1800,0x02] Transmit PDO Communication Parameter - Transmission Type (Unsigned8) */ \
SDOREPLY(0x1800, 0x02, 1, 0x000000FFL), \
/* [0x1800,0x03] Transmit PDO Communication Parameter - Inhibit Time (Unsigned16) */ \
SDOREPLY(0x1800, 0x03, 2, 0x000003E8L), \
/* [0x1800,0x05] Transmit PDO Communication Parameter - Event Timer (Unsigned16) */ \
SDOREPLY(0x1800, 0x05, 2, 0x000000FAL), \
/* [0x1800,0x06] Transmit PDO Communication Parameter - Sync Start Value (Unsigned8) */ \
SDOREPLY(0x1800, 0x06, 1, 0x00000000L), \
/* [0x1801,0x00] Transmit PDO Communication Parameter - Highest Subindex (Unsigned8) */ \
SDOREPLY(0x1801, 0x00, 1, 0x00000006L), \
/* [0x1801,0x01] Transmit PDO Communication Parameter - COB-ID (Unsigned32) */ \
SDOREPLY(0x1801, 0x01, 4, 0x00000000L), \
/* [0x1801,0x02] Transmit PDO Communication Parameter - Transmission Type (Unsigned8) */ \
SDOREPLY(0x1801, 0x02, 1, 0x000000FFL), \
/* [0x1801,0x03] Transmit PDO Communication Parameter - Inhibit Time (Unsigned16) */ \
SDOREPLY(0x1801, 0x03, 2, 0x000007D0L), \
/* [0x1801,0x05] Transmit PDO Communication Parameter - Event Timer (Unsigned16) */ \
SDOREPLY(0x1801, 0x05, 2, 0x000001F4L), \
/* [0x1801,0x06] Transmit PDO Communication Parameter - Sync Start Value (Unsigned8) */ \
SDOREPLY(0x1801, 0x06, 1, 0x00000000L), \
\
/* TPDO mapping parameters */ \
/* [0x1A00,0x00] Transmit PDO Mapping Parameter - Highest Subindex (Unsigned8) */ \
SDOREPLY(0x1A00, 0x00, 1, 0x00000004L), \
/* [0x1A00,0x01] Transmit PDO Mapping Parameter - PDO Mapping Entry (Unsigned32) */ \
SDOREPLY(0x1A00, 0x01, 4, 0x60000108L), \
/* [0x1A00,0x02] Transmit PDO Mapping Parameter - PDO Mapping Entry (Unsigned32) */ \
SDOREPLY(0x1A00, 0x02, 4, 0x60000208L), \
/* [0x1A00,0x03] Transmit PDO Mapping Parameter - PDO Mapping Entry (Unsigned32) */ \
SDOREPLY(0x1A00, 0x03, 4, 0x60000308L), \
/* [0x1A00,0x04] Transmit PDO Mapping Parameter - PDO Mapping Entry (Unsigned32) */ \
SDOREPLY(0x1A00, 0x04, 4, 0x60000408L), \
/* [0x1A01,0x00] Transmit PDO Mapping Parameter - Highest Subindex (Unsigned8) */ \
SDOREPLY(0x1A01, 0x00, 1, 0x00000002L), \
/* [0x1A01,0x01] Transmit PDO Mapping Parameter - PDO Mapping Entry (Unsigned32) */ \
SDOREPLY(0x1A01, 0x01, 4, 0x64010110L), \
/* [0x1A01,0x02] Transmit PDO Mapping Parameter - PDO Mapping Entry (Unsigned32) */ \
SDOREPLY(0x1A01, 0x02, 4, 0x64010210L), \
\
/* [0x6000,0x00] Read State 8 Input Lines - Number of Elements (Unsigned8) */ \
SDOREPLY(0x6000, 0x00, 1, 0x00000004L), \
/* [0x6200,0x00] Write State 8 Output Lines - Number of Elements (Unsigned8) */ \
SDOREPLY(0x6200, 0x00, 1, 0x00000004L), \
/* [0x6401,0x00] Read Analog Input 16-bit - Number of Elements (Unsigned8) */ \
SDOREPLY(0x6401, 0x00, 1, 0x00000002L), \
/* [0x6411,0x00] Write Analog Output 16-bit - Number of Elements (Unsigned8) */ \
SDOREPLY(0x6411, 0x00, 1, 0x00000002L), \

// 1 MACROS WERE GENERATED TO HOLD THE SDO REPLIES
// USE THE FOLLOWING INITIALIZER:
// SDOREPLY_ENTRIES


#define ODGENTRY_CONSTINITS \


#define ODGENTRY_ENTRIES \
ODGENTRYP(0x1008, 0x00, ODRD, 31, P100800_Manufacturer_Device_Name), \
ODGENTRYP(0x1009, 0x00, ODRD, 18, P100900_Manufacturer_Hardware_Version), \
ODGENTRYP(0x100A, 0x00, ODRD, 25, P100A00_Manufacturer_Software_Version), \
ODGENTRYP(0x5FFF, 0x00, ODRD, 42, P5FFF00_EmSA), \

// 1 MACROS WERE GENERATED TO HOLD THE OD REPLIES
// USE THE FOLLOWING INITIALIZER:
// ODGENTRY_ENTRIES

#define ODENTRY_ENTRIES \
/* mapping entries for RPDO1 [1600] */ \
ODENTRY(0x6200, 0x01, 1+ODRD+ODWR+WMAP, P620001_DigOutput8_1), \
ODENTRY(0x6200, 0x02, 1+ODRD+ODWR+WMAP, P620002_DigOutput8_2), \
ODENTRY(0x6200, 0x03, 1+ODRD+ODWR+WMAP, P620003_DigOutput8_3), \
ODENTRY(0x6200, 0x04, 1+ODRD+ODWR+WMAP, P620004_DigOutput8_4), \
/* mapping entries for RPDO2 [1601] */ \
ODENTRY(0x6411, 0x01, 2+ODRD+ODWR+WMAP, P641101_AnalogOutput16_1), \
ODENTRY(0x6411, 0x02, 2+ODRD+ODWR+WMAP, P641102_AnalogOutput16_2), \
/* mapping entries for TPDO1 [1A00] */ \
ODENTRY(0x6000, 0x01, 1+ODRD+RMAP, P600001_DigInput8_1), \
ODENTRY(0x6000, 0x02, 1+ODRD+RMAP, P600002_DigInput8_2), \
ODENTRY(0x6000, 0x03, 1+ODRD+RMAP, P600003_DigInput8_3), \
ODENTRY(0x6000, 0x04, 1+ODRD+RMAP, P600004_DigInput8_4), \
/* mapping entries for TPDO2 [1A01] */ \
ODENTRY(0x6401, 0x01, 2+ODRD+RMAP, P640101_AnalogInput16_1), \
ODENTRY(0x6401, 0x02, 2+ODRD+RMAP, P640102_AnalogInput16_2), \
ODENTRY(0x1002, 0x00, 4+ODRD, P100200_Manufacturer_Status_Register), \

// 1 MACROS WERE GENERATED TO HOLD THE OD REPLIES
// USE THE FOLLOWING INITIALIZER:
// ODENTRY_ENTRIES

// all entries in the object dictionary
#define OD_ID_LIST \
  0x000200, /* [0x0002,0x00] INTEGER8 (Integer8) */ \
  0x000300, /* [0x0003,0x00] INTEGER16 (Integer16) */ \
  0x000400, /* [0x0004,0x00] INTEGER32 (Integer32) */ \
  0x000500, /* [0x0005,0x00] UNSIGNED8 (Unsigned8) */ \
  0x000600, /* [0x0006,0x00] UNSIGNED16 (Unsigned16) */ \
  0x000700, /* [0x0007,0x00] UNSIGNED32 (Unsigned32) */ \
  0x100000, /* [0x1000,0x00] Device Type (Unsigned32) */ \
  0x100100, /* [0x1001,0x00] Error Register (Unsigned8) */ \
  0x100200, /* [0x1002,0x00] Manufacturer Status Register (Unsigned32) */ \
  0x100300, /* [0x1003,0x00] Pre-Defined Error Field - Number of Errors (Unsigned8) */ \
  0x100301, /* [0x1003,0x01] Pre-Defined Error Field - Pre-Defined Error Field 1 (Unsigned32) */ \
  0x100302, /* [0x1003,0x02] Pre-Defined Error Field - Pre-Defined Error Field 2 (Unsigned32) */ \
  0x100303, /* [0x1003,0x03] Pre-Defined Error Field - Pre-Defined Error Field 3 (Unsigned32) */ \
  0x100304, /* [0x1003,0x04] Pre-Defined Error Field - Pre-Defined Error Field 4 (Unsigned32) */ \
  0x100500, /* [0x1005,0x00] COB-ID SYNC (Unsigned32) */ \
  0x100800, /* [0x1008,0x00] Manufacturer Device Name (VisibleString) */ \
  0x100900, /* [0x1009,0x00] Manufacturer Hardware Version (VisibleString) */ \
  0x100A00, /* [0x100A,0x00] Manufacturer Software Version (VisibleString) */ \
  0x101000, /* [0x1010,0x00] Store Parameters - Highest Subindex (Unsigned8) */ \
  0x101001, /* [0x1010,0x01] Store Parameters - Save All Parameters (Unsigned32) */ \
  0x101002, /* [0x1010,0x02] Store Parameters - Save Communication Parameters (Unsigned32) */ \
  0x101003, /* [0x1010,0x03] Store Parameters - Save Application Parameters (Unsigned32) */ \
  0x101004, /* [0x1010,0x04] Store Parameters - Save Manufacturer Parameters (Unsigned32) */ \
  0x101100, /* [0x1011,0x00] Restore Parameters - Highest Subindex (Unsigned8) */ \
  0x101101, /* [0x1011,0x01] Restore Parameters - Save All Parameters (Unsigned32) */ \
  0x101102, /* [0x1011,0x02] Restore Parameters - Restore Communication Parameters (Unsigned32) */ \
  0x101103, /* [0x1011,0x03] Restore Parameters - Restore Application Parameters (Unsigned32) */ \
  0x101104, /* [0x1011,0x04] Restore Parameters - Restore Manufacturer Parameters (Unsigned32) */ \
  0x101400, /* [0x1014,0x00] COB-ID EMCY (Unsigned32) */ \
  0x101500, /* [0x1015,0x00] Inhibit Time Emergency (Unsigned16) */ \
  0x101600, /* [0x1016,0x00] Consumer Heartbeat Time - Highest Subindex (Unsigned8) */ \
  0x101601, /* [0x1016,0x01] Consumer Heartbeat Time - Consumer Heartbeat Time 1 (Unsigned32) */ \
  0x101602, /* [0x1016,0x02] Consumer Heartbeat Time - Consumer Heartbeat Time 2 (Unsigned32) */ \
  0x101603, /* [0x1016,0x03] Consumer Heartbeat Time - Consumer Heartbeat Time 3 (Unsigned32) */ \
  0x101700, /* [0x1017,0x00] Producer Heartbeat Time (Unsigned16) */ \
  0x101800, /* [0x1018,0x00] Identity Object - Highest Subindex (Unsigned8) */ \
  0x101801, /* [0x1018,0x01] Identity Object - Vendor ID (Unsigned32) */ \
  0x101802, /* [0x1018,0x02] Identity Object - Product Code (Unsigned32) */ \
  0x101803, /* [0x1018,0x03] Identity Object - Revision number (Unsigned32) */ \
  0x101804, /* [0x1018,0x04] Identity Object - Serial number (Unsigned32) */ \
  0x101900, /* [0x1019,0x00] SYNC counter overflow value (Unsigned8) */ \
  0x140000, /* [0x1400,0x00] Receive PDO Communication Parameter - Highest Subindex (Unsigned8) */ \
  0x140001, /* [0x1400,0x01] Receive PDO Communication Parameter - COB-ID (Unsigned32) */ \
  0x140002, /* [0x1400,0x02] Receive PDO Communication Parameter - Transmission Type (Unsigned8) */ \
  0x140100, /* [0x1401,0x00] Receive PDO Communication Parameter - Highest Subindex (Unsigned8) */ \
  0x140101, /* [0x1401,0x01] Receive PDO Communication Parameter - COB-ID (Unsigned32) */ \
  0x140102, /* [0x1401,0x02] Receive PDO Communication Parameter - Transmission Type (Unsigned8) */ \
  0x160000, /* [0x1600,0x00] Receive PDO Mapping Parameter - Highest Subindex (Unsigned8) */ \
  0x160001, /* [0x1600,0x01] Receive PDO Mapping Parameter - PDO Mapping Entry (Unsigned32) */ \
  0x160002, /* [0x1600,0x02] Receive PDO Mapping Parameter - PDO Mapping Entry (Unsigned32) */ \
  0x160003, /* [0x1600,0x03] Receive PDO Mapping Parameter - PDO Mapping Entry (Unsigned32) */ \
  0x160004, /* [0x1600,0x04] Receive PDO Mapping Parameter - PDO Mapping Entry (Unsigned32) */ \
  0x160100, /* [0x1601,0x00] Receive PDO Mapping Parameter - Highest Subindex (Unsigned8) */ \
  0x160101, /* [0x1601,0x01] Receive PDO Mapping Parameter - PDO Mapping Entry (Unsigned32) */ \
  0x160102, /* [0x1601,0x02] Receive PDO Mapping Parameter - PDO Mapping Entry (Unsigned32) */ \
  0x180000, /* [0x1800,0x00] Transmit PDO Communication Parameter - Highest Subindex (Unsigned8) */ \
  0x180001, /* [0x1800,0x01] Transmit PDO Communication Parameter - COB-ID (Unsigned32) */ \
  0x180002, /* [0x1800,0x02] Transmit PDO Communication Parameter - Transmission Type (Unsigned8) */ \
  0x180003, /* [0x1800,0x03] Transmit PDO Communication Parameter - Inhibit Time (Unsigned16) */ \
  0x180005, /* [0x1800,0x05] Transmit PDO Communication Parameter - Event Timer (Unsigned16) */ \
  0x180006, /* [0x1800,0x06] Transmit PDO Communication Parameter - Sync Start Value (Unsigned8) */ \
  0x180100, /* [0x1801,0x00] Transmit PDO Communication Parameter - Highest Subindex (Unsigned8) */ \
  0x180101, /* [0x1801,0x01] Transmit PDO Communication Parameter - COB-ID (Unsigned32) */ \
  0x180102, /* [0x1801,0x02] Transmit PDO Communication Parameter - Transmission Type (Unsigned8) */ \
  0x180103, /* [0x1801,0x03] Transmit PDO Communication Parameter - Inhibit Time (Unsigned16) */ \
  0x180105, /* [0x1801,0x05] Transmit PDO Communication Parameter - Event Timer (Unsigned16) */ \
  0x180106, /* [0x1801,0x06] Transmit PDO Communication Parameter - Sync Start Value (Unsigned8) */ \
  0x1A0000, /* [0x1A00,0x00] Transmit PDO Mapping Parameter - Highest Subindex (Unsigned8) */ \
  0x1A0001, /* [0x1A00,0x01] Transmit PDO Mapping Parameter - PDO Mapping Entry (Unsigned32) */ \
  0x1A0002, /* [0x1A00,0x02] Transmit PDO Mapping Parameter - PDO Mapping Entry (Unsigned32) */ \
  0x1A0003, /* [0x1A00,0x03] Transmit PDO Mapping Parameter - PDO Mapping Entry (Unsigned32) */ \
  0x1A0004, /* [0x1A00,0x04] Transmit PDO Mapping Parameter - PDO Mapping Entry (Unsigned32) */ \
  0x1A0100, /* [0x1A01,0x00] Transmit PDO Mapping Parameter - Highest Subindex (Unsigned8) */ \
  0x1A0101, /* [0x1A01,0x01] Transmit PDO Mapping Parameter - PDO Mapping Entry (Unsigned32) */ \
  0x1A0102, /* [0x1A01,0x02] Transmit PDO Mapping Parameter - PDO Mapping Entry (Unsigned32) */ \
  0x5FFF00, /* [0x5FFF,0x00] EmSA (VisibleString) */ \
  0x600000, /* [0x6000,0x00] Read State 8 Input Lines - Number of Elements (Unsigned8) */ \
  0x600001, /* [0x6000,0x01] Read State 8 Input Lines - DigInput8_1 (Unsigned8) */ \
  0x600002, /* [0x6000,0x02] Read State 8 Input Lines - DigInput8_2 (Unsigned8) */ \
  0x600003, /* [0x6000,0x03] Read State 8 Input Lines - DigInput8_3 (Unsigned8) */ \
  0x600004, /* [0x6000,0x04] Read State 8 Input Lines - DigInput8_4 (Unsigned8) */ \
  0x620000, /* [0x6200,0x00] Write State 8 Output Lines - Number of Elements (Unsigned8) */ \
  0x620001, /* [0x6200,0x01] Write State 8 Output Lines - DigOutput8_1 (Unsigned8) */ \
  0x620002, /* [0x6200,0x02] Write State 8 Output Lines - DigOutput8_2 (Unsigned8) */ \
  0x620003, /* [0x6200,0x03] Write State 8 Output Lines - DigOutput8_3 (Unsigned8) */ \
  0x620004, /* [0x6200,0x04] Write State 8 Output Lines - DigOutput8_4 (Unsigned8) */ \
  0x640100, /* [0x6401,0x00] Read Analog Input 16-bit - Number of Elements (Unsigned8) */ \
  0x640101, /* [0x6401,0x01] Read Analog Input 16-bit - AnalogInput16_1 (Integer16) */ \
  0x640102, /* [0x6401,0x02] Read Analog Input 16-bit - AnalogInput16_2 (Integer16) */ \
  0x641100, /* [0x6411,0x00] Write Analog Output 16-bit - Number of Elements (Unsigned8) */ \
  0x641101, /* [0x6411,0x01] Write Analog Output 16-bit - AnalogOutput16_1 (Integer16) */ \
  0x641102, /* [0x6411,0x02] Write Analog Output 16-bit - AnalogOutput16_2 (Integer16) */ \

// 1 MACROS WERE GENERATED TO HOLD THE LIST OF OD ENTRIES
// USE THE FOLLOWING INITIALIZER:
// OD_ID_LIST

#if defined(USE_CANOPEN_FD) && (USE_CANOPEN_FD == 1)

// types of all entries in the object dictionary
#define OD_ID_TYPE \
  TYPE_INTEGER8       , /* [0x0002,0x00] INTEGER8 (Integer8) */ \
  TYPE_INTEGER16      , /* [0x0003,0x00] INTEGER16 (Integer16) */ \
  TYPE_INTEGER32      , /* [0x0004,0x00] INTEGER32 (Integer32) */ \
  TYPE_UNSIGNED8      , /* [0x0005,0x00] UNSIGNED8 (Unsigned8) */ \
  TYPE_UNSIGNED16     , /* [0x0006,0x00] UNSIGNED16 (Unsigned16) */ \
  TYPE_UNSIGNED32     , /* [0x0007,0x00] UNSIGNED32 (Unsigned32) */ \
  TYPE_UNSIGNED32     , /* [0x1000,0x00] Device Type (Unsigned32) */ \
  TYPE_UNSIGNED8      , /* [0x1001,0x00] Error Register (Unsigned8) */ \
  TYPE_UNSIGNED32     , /* [0x1002,0x00] Manufacturer Status Register (Unsigned32) */ \
  TYPE_UNSIGNED8      , /* [0x1003,0x00] Pre-Defined Error Field - Number of Errors (Unsigned8) */ \
  TYPE_UNSIGNED32     , /* [0x1003,0x01] Pre-Defined Error Field - Pre-Defined Error Field 1 (Unsigned32) */ \
  TYPE_UNSIGNED32     , /* [0x1003,0x02] Pre-Defined Error Field - Pre-Defined Error Field 2 (Unsigned32) */ \
  TYPE_UNSIGNED32     , /* [0x1003,0x03] Pre-Defined Error Field - Pre-Defined Error Field 3 (Unsigned32) */ \
  TYPE_UNSIGNED32     , /* [0x1003,0x04] Pre-Defined Error Field - Pre-Defined Error Field 4 (Unsigned32) */ \
  TYPE_UNSIGNED32     , /* [0x1005,0x00] COB-ID SYNC (Unsigned32) */ \
  TYPE_VISIBLE_STRING , /* [0x1008,0x00] Manufacturer Device Name (VisibleString) */ \
  TYPE_VISIBLE_STRING , /* [0x1009,0x00] Manufacturer Hardware Version (VisibleString) */ \
  TYPE_VISIBLE_STRING , /* [0x100A,0x00] Manufacturer Software Version (VisibleString) */ \
  TYPE_UNSIGNED8      , /* [0x1010,0x00] Store Parameters - Highest Subindex (Unsigned8) */ \
  TYPE_UNSIGNED32     , /* [0x1010,0x01] Store Parameters - Save All Parameters (Unsigned32) */ \
  TYPE_UNSIGNED32     , /* [0x1010,0x02] Store Parameters - Save Communication Parameters (Unsigned32) */ \
  TYPE_UNSIGNED32     , /* [0x1010,0x03] Store Parameters - Save Application Parameters (Unsigned32) */ \
  TYPE_UNSIGNED32     , /* [0x1010,0x04] Store Parameters - Save Manufacturer Parameters (Unsigned32) */ \
  TYPE_UNSIGNED8      , /* [0x1011,0x00] Restore Parameters - Highest Subindex (Unsigned8) */ \
  TYPE_UNSIGNED32     , /* [0x1011,0x01] Restore Parameters - Save All Parameters (Unsigned32) */ \
  TYPE_UNSIGNED32     , /* [0x1011,0x02] Restore Parameters - Restore Communication Parameters (Unsigned32) */ \
  TYPE_UNSIGNED32     , /* [0x1011,0x03] Restore Parameters - Restore Application Parameters (Unsigned32) */ \
  TYPE_UNSIGNED32     , /* [0x1011,0x04] Restore Parameters - Restore Manufacturer Parameters (Unsigned32) */ \
  TYPE_UNSIGNED32     , /* [0x1014,0x00] COB-ID EMCY (Unsigned32) */ \
  TYPE_UNSIGNED16     , /* [0x1015,0x00] Inhibit Time Emergency (Unsigned16) */ \
  TYPE_UNSIGNED8      , /* [0x1016,0x00] Consumer Heartbeat Time - Highest Subindex (Unsigned8) */ \
  TYPE_UNSIGNED32     , /* [0x1016,0x01] Consumer Heartbeat Time - Consumer Heartbeat Time 1 (Unsigned32) */ \
  TYPE_UNSIGNED32     , /* [0x1016,0x02] Consumer Heartbeat Time - Consumer Heartbeat Time 2 (Unsigned32) */ \
  TYPE_UNSIGNED32     , /* [0x1016,0x03] Consumer Heartbeat Time - Consumer Heartbeat Time 3 (Unsigned32) */ \
  TYPE_UNSIGNED16     , /* [0x1017,0x00] Producer Heartbeat Time (Unsigned16) */ \
  TYPE_UNSIGNED8      , /* [0x1018,0x00] Identity Object - Highest Subindex (Unsigned8) */ \
  TYPE_UNSIGNED32     , /* [0x1018,0x01] Identity Object - Vendor ID (Unsigned32) */ \
  TYPE_UNSIGNED32     , /* [0x1018,0x02] Identity Object - Product Code (Unsigned32) */ \
  TYPE_UNSIGNED32     , /* [0x1018,0x03] Identity Object - Revision number (Unsigned32) */ \
  TYPE_UNSIGNED32     , /* [0x1018,0x04] Identity Object - Serial number (Unsigned32) */ \
  TYPE_UNSIGNED8      , /* [0x1019,0x00] SYNC counter overflow value (Unsigned8) */ \
  TYPE_UNSIGNED8      , /* [0x1400,0x00] Receive PDO Communication Parameter - Highest Subindex (Unsigned8) */ \
  TYPE_UNSIGNED32     , /* [0x1400,0x01] Receive PDO Communication Parameter - COB-ID (Unsigned32) */ \
  TYPE_UNSIGNED8      , /* [0x1400,0x02] Receive PDO Communication Parameter - Transmission Type (Unsigned8) */ \
  TYPE_UNSIGNED8      , /* [0x1401,0x00] Receive PDO Communication Parameter - Highest Subindex (Unsigned8) */ \
  TYPE_UNSIGNED32     , /* [0x1401,0x01] Receive PDO Communication Parameter - COB-ID (Unsigned32) */ \
  TYPE_UNSIGNED8      , /* [0x1401,0x02] Receive PDO Communication Parameter - Transmission Type (Unsigned8) */ \
  TYPE_UNSIGNED8      , /* [0x1600,0x00] Receive PDO Mapping Parameter - Highest Subindex (Unsigned8) */ \
  TYPE_UNSIGNED32     , /* [0x1600,0x01] Receive PDO Mapping Parameter - PDO Mapping Entry (Unsigned32) */ \
  TYPE_UNSIGNED32     , /* [0x1600,0x02] Receive PDO Mapping Parameter - PDO Mapping Entry (Unsigned32) */ \
  TYPE_UNSIGNED32     , /* [0x1600,0x03] Receive PDO Mapping Parameter - PDO Mapping Entry (Unsigned32) */ \
  TYPE_UNSIGNED32     , /* [0x1600,0x04] Receive PDO Mapping Parameter - PDO Mapping Entry (Unsigned32) */ \
  TYPE_UNSIGNED8      , /* [0x1601,0x00] Receive PDO Mapping Parameter - Highest Subindex (Unsigned8) */ \
  TYPE_UNSIGNED32     , /* [0x1601,0x01] Receive PDO Mapping Parameter - PDO Mapping Entry (Unsigned32) */ \
  TYPE_UNSIGNED32     , /* [0x1601,0x02] Receive PDO Mapping Parameter - PDO Mapping Entry (Unsigned32) */ \
  TYPE_UNSIGNED8      , /* [0x1800,0x00] Transmit PDO Communication Parameter - Highest Subindex (Unsigned8) */ \
  TYPE_UNSIGNED32     , /* [0x1800,0x01] Transmit PDO Communication Parameter - COB-ID (Unsigned32) */ \
  TYPE_UNSIGNED8      , /* [0x1800,0x02] Transmit PDO Communication Parameter - Transmission Type (Unsigned8) */ \
  TYPE_UNSIGNED16     , /* [0x1800,0x03] Transmit PDO Communication Parameter - Inhibit Time (Unsigned16) */ \
  TYPE_UNSIGNED16     , /* [0x1800,0x05] Transmit PDO Communication Parameter - Event Timer (Unsigned16) */ \
  TYPE_UNSIGNED8      , /* [0x1800,0x06] Transmit PDO Communication Parameter - Sync Start Value (Unsigned8) */ \
  TYPE_UNSIGNED8      , /* [0x1801,0x00] Transmit PDO Communication Parameter - Highest Subindex (Unsigned8) */ \
  TYPE_UNSIGNED32     , /* [0x1801,0x01] Transmit PDO Communication Parameter - COB-ID (Unsigned32) */ \
  TYPE_UNSIGNED8      , /* [0x1801,0x02] Transmit PDO Communication Parameter - Transmission Type (Unsigned8) */ \
  TYPE_UNSIGNED16     , /* [0x1801,0x03] Transmit PDO Communication Parameter - Inhibit Time (Unsigned16) */ \
  TYPE_UNSIGNED16     , /* [0x1801,0x05] Transmit PDO Communication Parameter - Event Timer (Unsigned16) */ \
  TYPE_UNSIGNED8      , /* [0x1801,0x06] Transmit PDO Communication Parameter - Sync Start Value (Unsigned8) */ \
  TYPE_UNSIGNED8      , /* [0x1A00,0x00] Transmit PDO Mapping Parameter - Highest Subindex (Unsigned8) */ \
  TYPE_UNSIGNED32     , /* [0x1A00,0x01] Transmit PDO Mapping Parameter - PDO Mapping Entry (Unsigned32) */ \
  TYPE_UNSIGNED32     , /* [0x1A00,0x02] Transmit PDO Mapping Parameter - PDO Mapping Entry (Unsigned32) */ \
  TYPE_UNSIGNED32     , /* [0x1A00,0x03] Transmit PDO Mapping Parameter - PDO Mapping Entry (Unsigned32) */ \
  TYPE_UNSIGNED32     , /* [0x1A00,0x04] Transmit PDO Mapping Parameter - PDO Mapping Entry (Unsigned32) */ \
  TYPE_UNSIGNED8      , /* [0x1A01,0x00] Transmit PDO Mapping Parameter - Highest Subindex (Unsigned8) */ \
  TYPE_UNSIGNED32     , /* [0x1A01,0x01] Transmit PDO Mapping Parameter - PDO Mapping Entry (Unsigned32) */ \
  TYPE_UNSIGNED32     , /* [0x1A01,0x02] Transmit PDO Mapping Parameter - PDO Mapping Entry (Unsigned32) */ \
  TYPE_VISIBLE_STRING , /* [0x5FFF,0x00] EmSA (VisibleString) */ \
  TYPE_UNSIGNED8      , /* [0x6000,0x00] Read State 8 Input Lines - Number of Elements (Unsigned8) */ \
  TYPE_UNSIGNED8      , /* [0x6000,0x01] Read State 8 Input Lines - DigInput8_1 (Unsigned8) */ \
  TYPE_UNSIGNED8      , /* [0x6000,0x02] Read State 8 Input Lines - DigInput8_2 (Unsigned8) */ \
  TYPE_UNSIGNED8      , /* [0x6000,0x03] Read State 8 Input Lines - DigInput8_3 (Unsigned8) */ \
  TYPE_UNSIGNED8      , /* [0x6000,0x04] Read State 8 Input Lines - DigInput8_4 (Unsigned8) */ \
  TYPE_UNSIGNED8      , /* [0x6200,0x00] Write State 8 Output Lines - Number of Elements (Unsigned8) */ \
  TYPE_UNSIGNED8      , /* [0x6200,0x01] Write State 8 Output Lines - DigOutput8_1 (Unsigned8) */ \
  TYPE_UNSIGNED8      , /* [0x6200,0x02] Write State 8 Output Lines - DigOutput8_2 (Unsigned8) */ \
  TYPE_UNSIGNED8      , /* [0x6200,0x03] Write State 8 Output Lines - DigOutput8_3 (Unsigned8) */ \
  TYPE_UNSIGNED8      , /* [0x6200,0x04] Write State 8 Output Lines - DigOutput8_4 (Unsigned8) */ \
  TYPE_UNSIGNED8      , /* [0x6401,0x00] Read Analog Input 16-bit - Number of Elements (Unsigned8) */ \
  TYPE_INTEGER16      , /* [0x6401,0x01] Read Analog Input 16-bit - AnalogInput16_1 (Integer16) */ \
  TYPE_INTEGER16      , /* [0x6401,0x02] Read Analog Input 16-bit - AnalogInput16_2 (Integer16) */ \
  TYPE_UNSIGNED8      , /* [0x6411,0x00] Write Analog Output 16-bit - Number of Elements (Unsigned8) */ \
  TYPE_INTEGER16      , /* [0x6411,0x01] Write Analog Output 16-bit - AnalogOutput16_1 (Integer16) */ \
  TYPE_INTEGER16      , /* [0x6411,0x02] Write Analog Output 16-bit - AnalogOutput16_2 (Integer16) */ \

// 1 MACROS WERE GENERATED TO HOLD THE LIST OF OD ENTRY TYPES
// USE THE FOLLOWING INITIALIZER:
// OD_ID_TYPE

// table location of all entries in the object dictionary
#define OD_ID_TABLELOCATION \
/* WARNING - TABLE OF ENTRY IS UNKNOWN */ \
  ODLOC_UNKNOWN , /* [0x0002,0x00] INTEGER8 (Integer8) */ \
/* WARNING - TABLE OF ENTRY IS UNKNOWN */ \
  ODLOC_UNKNOWN , /* [0x0003,0x00] INTEGER16 (Integer16) */ \
/* WARNING - TABLE OF ENTRY IS UNKNOWN */ \
  ODLOC_UNKNOWN , /* [0x0004,0x00] INTEGER32 (Integer32) */ \
/* WARNING - TABLE OF ENTRY IS UNKNOWN */ \
  ODLOC_UNKNOWN , /* [0x0005,0x00] UNSIGNED8 (Unsigned8) */ \
/* WARNING - TABLE OF ENTRY IS UNKNOWN */ \
  ODLOC_UNKNOWN , /* [0x0006,0x00] UNSIGNED16 (Unsigned16) */ \
/* WARNING - TABLE OF ENTRY IS UNKNOWN */ \
  ODLOC_UNKNOWN , /* [0x0007,0x00] UNSIGNED32 (Unsigned32) */ \
  ODLOC_SDOREPLY, /* [0x1000,0x00] Device Type (Unsigned32) */ \
  ODLOC_SDOREPLY, /* [0x1001,0x00] Error Register (Unsigned8) */ \
  ODLOC_ODENTRY , /* [0x1002,0x00] Manufacturer Status Register (Unsigned32) */ \
/* WARNING - TABLE OF ENTRY IS UNKNOWN */ \
  ODLOC_UNKNOWN , /* [0x1003,0x00] Pre-Defined Error Field - Number of Errors (Unsigned8) */ \
/* WARNING - TABLE OF ENTRY IS UNKNOWN */ \
  ODLOC_UNKNOWN , /* [0x1003,0x01] Pre-Defined Error Field - Pre-Defined Error Field 1 (Unsigned32) */ \
/* WARNING - TABLE OF ENTRY IS UNKNOWN */ \
  ODLOC_UNKNOWN , /* [0x1003,0x02] Pre-Defined Error Field - Pre-Defined Error Field 2 (Unsigned32) */ \
/* WARNING - TABLE OF ENTRY IS UNKNOWN */ \
  ODLOC_UNKNOWN , /* [0x1003,0x03] Pre-Defined Error Field - Pre-Defined Error Field 3 (Unsigned32) */ \
/* WARNING - TABLE OF ENTRY IS UNKNOWN */ \
  ODLOC_UNKNOWN , /* [0x1003,0x04] Pre-Defined Error Field - Pre-Defined Error Field 4 (Unsigned32) */ \
  ODLOC_SDOREPLY, /* [0x1005,0x00] COB-ID SYNC (Unsigned32) */ \
  ODLOC_ODGENTRY, /* [0x1008,0x00] Manufacturer Device Name (VisibleString) */ \
  ODLOC_ODGENTRY, /* [0x1009,0x00] Manufacturer Hardware Version (VisibleString) */ \
  ODLOC_ODGENTRY, /* [0x100A,0x00] Manufacturer Software Version (VisibleString) */ \
/* WARNING - TABLE OF ENTRY IS UNKNOWN */ \
  ODLOC_UNKNOWN , /* [0x1010,0x00] Store Parameters - Highest Subindex (Unsigned8) */ \
/* WARNING - TABLE OF ENTRY IS UNKNOWN */ \
  ODLOC_UNKNOWN , /* [0x1010,0x01] Store Parameters - Save All Parameters (Unsigned32) */ \
/* WARNING - TABLE OF ENTRY IS UNKNOWN */ \
  ODLOC_UNKNOWN , /* [0x1010,0x02] Store Parameters - Save Communication Parameters (Unsigned32) */ \
/* WARNING - TABLE OF ENTRY IS UNKNOWN */ \
  ODLOC_UNKNOWN , /* [0x1010,0x03] Store Parameters - Save Application Parameters (Unsigned32) */ \
/* WARNING - TABLE OF ENTRY IS UNKNOWN */ \
  ODLOC_UNKNOWN , /* [0x1010,0x04] Store Parameters - Save Manufacturer Parameters (Unsigned32) */ \
/* WARNING - TABLE OF ENTRY IS UNKNOWN */ \
  ODLOC_UNKNOWN , /* [0x1011,0x00] Restore Parameters - Highest Subindex (Unsigned8) */ \
/* WARNING - TABLE OF ENTRY IS UNKNOWN */ \
  ODLOC_UNKNOWN , /* [0x1011,0x01] Restore Parameters - Save All Parameters (Unsigned32) */ \
/* WARNING - TABLE OF ENTRY IS UNKNOWN */ \
  ODLOC_UNKNOWN , /* [0x1011,0x02] Restore Parameters - Restore Communication Parameters (Unsigned32) */ \
/* WARNING - TABLE OF ENTRY IS UNKNOWN */ \
  ODLOC_UNKNOWN , /* [0x1011,0x03] Restore Parameters - Restore Application Parameters (Unsigned32) */ \
/* WARNING - TABLE OF ENTRY IS UNKNOWN */ \
  ODLOC_UNKNOWN , /* [0x1011,0x04] Restore Parameters - Restore Manufacturer Parameters (Unsigned32) */ \
  ODLOC_SDOREPLY, /* [0x1014,0x00] COB-ID EMCY (Unsigned32) */ \
  ODLOC_SDOREPLY, /* [0x1015,0x00] Inhibit Time Emergency (Unsigned16) */ \
  ODLOC_SDOREPLY, /* [0x1016,0x00] Consumer Heartbeat Time - Highest Subindex (Unsigned8) */ \
  ODLOC_SDOREPLY, /* [0x1016,0x01] Consumer Heartbeat Time - Consumer Heartbeat Time 1 (Unsigned32) */ \
  ODLOC_SDOREPLY, /* [0x1016,0x02] Consumer Heartbeat Time - Consumer Heartbeat Time 2 (Unsigned32) */ \
  ODLOC_SDOREPLY, /* [0x1016,0x03] Consumer Heartbeat Time - Consumer Heartbeat Time 3 (Unsigned32) */ \
  ODLOC_SDOREPLY, /* [0x1017,0x00] Producer Heartbeat Time (Unsigned16) */ \
  ODLOC_SDOREPLY, /* [0x1018,0x00] Identity Object - Highest Subindex (Unsigned8) */ \
  ODLOC_SDOREPLY, /* [0x1018,0x01] Identity Object - Vendor ID (Unsigned32) */ \
  ODLOC_SDOREPLY, /* [0x1018,0x02] Identity Object - Product Code (Unsigned32) */ \
  ODLOC_SDOREPLY, /* [0x1018,0x03] Identity Object - Revision number (Unsigned32) */ \
  ODLOC_SDOREPLY, /* [0x1018,0x04] Identity Object - Serial number (Unsigned32) */ \
  ODLOC_SDOREPLY, /* [0x1019,0x00] SYNC counter overflow value (Unsigned8) */ \
  ODLOC_SDOREPLY, /* [0x1400,0x00] Receive PDO Communication Parameter - Highest Subindex (Unsigned8) */ \
  ODLOC_SDOREPLY, /* [0x1400,0x01] Receive PDO Communication Parameter - COB-ID (Unsigned32) */ \
  ODLOC_SDOREPLY, /* [0x1400,0x02] Receive PDO Communication Parameter - Transmission Type (Unsigned8) */ \
  ODLOC_SDOREPLY, /* [0x1401,0x00] Receive PDO Communication Parameter - Highest Subindex (Unsigned8) */ \
  ODLOC_SDOREPLY, /* [0x1401,0x01] Receive PDO Communication Parameter - COB-ID (Unsigned32) */ \
  ODLOC_SDOREPLY, /* [0x1401,0x02] Receive PDO Communication Parameter - Transmission Type (Unsigned8) */ \
  ODLOC_SDOREPLY, /* [0x1600,0x00] Receive PDO Mapping Parameter - Highest Subindex (Unsigned8) */ \
  ODLOC_SDOREPLY, /* [0x1600,0x01] Receive PDO Mapping Parameter - PDO Mapping Entry (Unsigned32) */ \
  ODLOC_SDOREPLY, /* [0x1600,0x02] Receive PDO Mapping Parameter - PDO Mapping Entry (Unsigned32) */ \
  ODLOC_SDOREPLY, /* [0x1600,0x03] Receive PDO Mapping Parameter - PDO Mapping Entry (Unsigned32) */ \
  ODLOC_SDOREPLY, /* [0x1600,0x04] Receive PDO Mapping Parameter - PDO Mapping Entry (Unsigned32) */ \
  ODLOC_SDOREPLY, /* [0x1601,0x00] Receive PDO Mapping Parameter - Highest Subindex (Unsigned8) */ \
  ODLOC_SDOREPLY, /* [0x1601,0x01] Receive PDO Mapping Parameter - PDO Mapping Entry (Unsigned32) */ \
  ODLOC_SDOREPLY, /* [0x1601,0x02] Receive PDO Mapping Parameter - PDO Mapping Entry (Unsigned32) */ \
  ODLOC_SDOREPLY, /* [0x1800,0x00] Transmit PDO Communication Parameter - Highest Subindex (Unsigned8) */ \
  ODLOC_SDOREPLY, /* [0x1800,0x01] Transmit PDO Communication Parameter - COB-ID (Unsigned32) */ \
  ODLOC_SDOREPLY, /* [0x1800,0x02] Transmit PDO Communication Parameter - Transmission Type (Unsigned8) */ \
  ODLOC_SDOREPLY, /* [0x1800,0x03] Transmit PDO Communication Parameter - Inhibit Time (Unsigned16) */ \
  ODLOC_SDOREPLY, /* [0x1800,0x05] Transmit PDO Communication Parameter - Event Timer (Unsigned16) */ \
  ODLOC_SDOREPLY, /* [0x1800,0x06] Transmit PDO Communication Parameter - Sync Start Value (Unsigned8) */ \
  ODLOC_SDOREPLY, /* [0x1801,0x00] Transmit PDO Communication Parameter - Highest Subindex (Unsigned8) */ \
  ODLOC_SDOREPLY, /* [0x1801,0x01] Transmit PDO Communication Parameter - COB-ID (Unsigned32) */ \
  ODLOC_SDOREPLY, /* [0x1801,0x02] Transmit PDO Communication Parameter - Transmission Type (Unsigned8) */ \
  ODLOC_SDOREPLY, /* [0x1801,0x03] Transmit PDO Communication Parameter - Inhibit Time (Unsigned16) */ \
  ODLOC_SDOREPLY, /* [0x1801,0x05] Transmit PDO Communication Parameter - Event Timer (Unsigned16) */ \
  ODLOC_SDOREPLY, /* [0x1801,0x06] Transmit PDO Communication Parameter - Sync Start Value (Unsigned8) */ \
  ODLOC_SDOREPLY, /* [0x1A00,0x00] Transmit PDO Mapping Parameter - Highest Subindex (Unsigned8) */ \
  ODLOC_SDOREPLY, /* [0x1A00,0x01] Transmit PDO Mapping Parameter - PDO Mapping Entry (Unsigned32) */ \
  ODLOC_SDOREPLY, /* [0x1A00,0x02] Transmit PDO Mapping Parameter - PDO Mapping Entry (Unsigned32) */ \
  ODLOC_SDOREPLY, /* [0x1A00,0x03] Transmit PDO Mapping Parameter - PDO Mapping Entry (Unsigned32) */ \
  ODLOC_SDOREPLY, /* [0x1A00,0x04] Transmit PDO Mapping Parameter - PDO Mapping Entry (Unsigned32) */ \
  ODLOC_SDOREPLY, /* [0x1A01,0x00] Transmit PDO Mapping Parameter - Highest Subindex (Unsigned8) */ \
  ODLOC_SDOREPLY, /* [0x1A01,0x01] Transmit PDO Mapping Parameter - PDO Mapping Entry (Unsigned32) */ \
  ODLOC_SDOREPLY, /* [0x1A01,0x02] Transmit PDO Mapping Parameter - PDO Mapping Entry (Unsigned32) */ \
  ODLOC_ODGENTRY, /* [0x5FFF,0x00] EmSA (VisibleString) */ \
  ODLOC_SDOREPLY, /* [0x6000,0x00] Read State 8 Input Lines - Number of Elements (Unsigned8) */ \
  ODLOC_ODENTRY , /* [0x6000,0x01] Read State 8 Input Lines - DigInput8_1 (Unsigned8) */ \
  ODLOC_ODENTRY , /* [0x6000,0x02] Read State 8 Input Lines - DigInput8_2 (Unsigned8) */ \
  ODLOC_ODENTRY , /* [0x6000,0x03] Read State 8 Input Lines - DigInput8_3 (Unsigned8) */ \
  ODLOC_ODENTRY , /* [0x6000,0x04] Read State 8 Input Lines - DigInput8_4 (Unsigned8) */ \
  ODLOC_SDOREPLY, /* [0x6200,0x00] Write State 8 Output Lines - Number of Elements (Unsigned8) */ \
  ODLOC_ODENTRY , /* [0x6200,0x01] Write State 8 Output Lines - DigOutput8_1 (Unsigned8) */ \
  ODLOC_ODENTRY , /* [0x6200,0x02] Write State 8 Output Lines - DigOutput8_2 (Unsigned8) */ \
  ODLOC_ODENTRY , /* [0x6200,0x03] Write State 8 Output Lines - DigOutput8_3 (Unsigned8) */ \
  ODLOC_ODENTRY , /* [0x6200,0x04] Write State 8 Output Lines - DigOutput8_4 (Unsigned8) */ \
  ODLOC_SDOREPLY, /* [0x6401,0x00] Read Analog Input 16-bit - Number of Elements (Unsigned8) */ \
  ODLOC_ODENTRY , /* [0x6401,0x01] Read Analog Input 16-bit - AnalogInput16_1 (Integer16) */ \
  ODLOC_ODENTRY , /* [0x6401,0x02] Read Analog Input 16-bit - AnalogInput16_2 (Integer16) */ \
  ODLOC_SDOREPLY, /* [0x6411,0x00] Write Analog Output 16-bit - Number of Elements (Unsigned8) */ \
  ODLOC_ODENTRY , /* [0x6411,0x01] Write Analog Output 16-bit - AnalogOutput16_1 (Integer16) */ \
  ODLOC_ODENTRY , /* [0x6411,0x02] Write Analog Output 16-bit - AnalogOutput16_2 (Integer16) */ \

// 1 MACROS WERE GENERATED TO HOLD THE LIST OF OD ENTRY TYPES
// USE THE FOLLOWING INITIALIZER:
// OD_ID_TABLELOCATION

#endif // USE_CANOPEN_FD

#endif // _ENTRIESANDREPLIESH_
