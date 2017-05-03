/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * Arduino Mega with RAMPS v1.4 (or v1.3) pin assignments
 *
 * Applies to the following boards:
 *
 *  RAMPS_14_EFB (Hotend, Fan, Bed)
 *  RAMPS_14_EEB (Hotend0, Hotend1, Bed)
 *  RAMPS_14_EFF (Hotend, Fan0, Fan1)
 *  RAMPS_14_EEF (Hotend0, Hotend1, Fan)
 *  RAMPS_14_SF  (Spindle, Controller Fan)
 *
 *  RAMPS_13_EFB (Hotend, Fan, Bed)
 *  RAMPS_13_EEB (Hotend0, Hotend1, Bed)
 *  RAMPS_13_EFF (Hotend, Fan0, Fan1)
 *  RAMPS_13_EEF (Hotend0, Hotend1, Fan)
 *  RAMPS_13_SF  (Spindle, Controller Fan)
 *
 *  Other pins_MYBOARD.h files may override these defaults
 *
 *  Differences between
 *  RAMPS_13 | RAMPS_14
 *         7 | 11
 */

#if !defined(__AVR_ATmega1280__) && !defined(__AVR_ATmega2560__)
  #error "Oops!  Make sure you have 'Arduino Mega' selected from the 'Tools -> Boards' menu."
#endif

#ifndef BOARD_NAME
  #define BOARD_NAME "RAMPS 1.4"
#endif

#define LARGE_FLASH true

//
// Servos
//

//
// Limit Switches
//
#define X_MIN_PIN       53
#define X_MAX_PIN       9
#define Y_MIN_PIN       8
#define Y_MAX_PIN       7
#define Z_MIN_PIN       6
// #define Z_MAX_PIN          19
#define Z_MIN_PROBE_PIN       16

// #define SLED_PIN           -1

//
// Steppers
//
#define X_STEP_PIN         32
#define X_DIR_PIN          33
#define X_ENABLE_PIN       31

#define Y_STEP_PIN         35
#define Y_DIR_PIN          36
#define Y_ENABLE_PIN       34

#define Z_STEP_PIN         40
#define Z_DIR_PIN          41
#define Z_ENABLE_PIN       37

#define E0_STEP_PIN        26
#define E0_DIR_PIN         27
#define E0_ENABLE_PIN      25

#define E1_STEP_PIN        29
#define E1_DIR_PIN         39
#define E1_ENABLE_PIN      28

#define E2_STEP_PIN        15
#define E2_DIR_PIN         30
#define E2_ENABLE_PIN      14

//
// Temperature Sensors
//
/* For example if pin A0 - write 0 (not A0 or 64)!!! */
#define TEMP_0_PIN         0   // Analog Input
#define TEMP_1_PIN         1   // Analog Input
#define TEMP_2_PIN         2   // Analog Input
#define TEMP_BED_PIN       3   // Analog Input

//
// Augmentation for auto-assigning RAMPS plugs
//
// #if DISABLED(IS_RAMPS_EEB) && DISABLED(IS_RAMPS_EEF) && DISABLED(IS_RAMPS_EFB) && DISABLED(IS_RAMPS_EFF) && DISABLED(IS_RAMPS_SF) && !PIN_EXISTS(MOSFET_D)
//   #if HOTENDS > 1
//     #if TEMP_SENSOR_BED
//       #define IS_RAMPS_EEB
//     #else
//       #define IS_RAMPS_EEF
//     #endif
//   #elif TEMP_SENSOR_BED
//     #define IS_RAMPS_EFB
//   #else
//     #define IS_RAMPS_EFF
//   #endif
// #endif

//
// Heaters / Fans
//
// #ifndef MOSFET_D_PIN
//   #define MOSFET_D_PIN  -1
// #endif
// #ifndef RAMPS_D8_PIN
//   #define RAMPS_D8_PIN   8
// #endif
// #ifndef RAMPS_D9_PIN
//   #define RAMPS_D9_PIN   9
// #endif
// #ifndef RAMPS_D10_PIN
//   #define RAMPS_D10_PIN 10
// #endif
//
#define HEATER_0_PIN      3
#define HEATER_1_PIN      2
#define HEATER_2_PIN      5

#define HEATER_BED_PIN    17
//

//
// #if ENABLED(IS_RAMPS_EFB)                      // Hotend, Fan, Bed
//   #define FAN_PIN        RAMPS_D9_PIN
//   #define HEATER_BED_PIN RAMPS_D8_PIN
// #elif ENABLED(IS_RAMPS_EEF)                    // Hotend, Hotend, Fan
//   #define HEATER_1_PIN   RAMPS_D9_PIN
//   #define FAN_PIN        RAMPS_D8_PIN
// #elif ENABLED(IS_RAMPS_EEB)                    // Hotend, Hotend, Bed
//   #define HEATER_1_PIN   RAMPS_D9_PIN
//   #define HEATER_BED_PIN RAMPS_D8_PIN
// #elif ENABLED(IS_RAMPS_EFF)                    // Hotend, Fan, Fan
//   #define FAN_PIN        RAMPS_D9_PIN
//   #define FAN1_PIN       RAMPS_D8_PIN
// #elif ENABLED(IS_RAMPS_SF)                     // Spindle, Fan
//   #define FAN_PIN        RAMPS_D8_PIN
// #else                                          // Non-specific are "EFB" (i.e., "EFBF" or "EFBE")
//   #define FAN_PIN        RAMPS_D9_PIN
//   #define HEATER_BED_PIN RAMPS_D8_PIN
//   #if HOTENDS == 1
//     #define FAN1_PIN     MOSFET_D_PIN
//   #else
//     #define HEATER_1_PIN MOSFET_D_PIN
//   #endif
// #endif
//
// #ifndef FAN_PIN
//   #define FAN_PIN 4      // IO pin. Buffer needed
// #endif
//
// //
// // Misc. Functions
// //
// #define SDSS               53
// #define LED_PIN            13

// Use the RAMPS 1.4 Analog input 5 on the AUX2 connector
// #define FILWIDTH_PIN        5   // Analog Input

// define digital pin 4 for the filament runout sensor. Use the RAMPS 1.4 digital input 4 on the servos connector
// #define FIL_RUNOUT_PIN      4

// #define PS_ON_PIN          12
