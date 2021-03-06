#pragma once

// Version of the kegboard firmware. This is bumped whenever there's a
// significant new feature in the firmware.
//
// Version history:
//   v4 (2010-01-04)
//     Initial version number.
//   v5 (2010-01-10)
//     Fix issue that caused flow events to be reported too frequently.
//   v6 (2010-09-22)
//     Added auth_token message.
//   v7 (2011-03-16)
//     Added implementation of `set_output` command, relay output watchdog.
//   v8 (2011-06-11)
//     Expand 'set_output' to support onboard kegboard relay's, flow led's
//   v9 (2011-06-13)
//     Support ID-12 RFID input
//   v10 (2011-06-19)
//     Reverse ID-12 RFID endianness.
//   v11 (2012-05-02)
//     Updates for Arduino SDK v1.0; no functional changes.

#define FIRMWARE_VERSION 11

#define BUILD_DATE __DATE__
#define BUILD_TIME __TIME__
