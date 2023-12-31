/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
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
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

#if HAS_SPI_TFT || HAS_FSMC_TFT
  #error "Sorry! TFT displays are not available for HAL/ESP32."
#endif

#if ENABLED(EMERGENCY_PARSER)
  #error "EMERGENCY_PARSER is not yet implemented for ESP32. Disable EMERGENCY_PARSER to continue."
#endif

#if ENABLED(SPINDLE_LASER_USE_PWM) && SPINDLE_LASER_FREQUENCY > 78125
  #error "SPINDLE_LASER_FREQUENCY maximum value is 78125Hz for ESP32."
#endif
#if ENABLED(FAST_PWM_FAN) && FAST_PWM_FAN_FREQUENCY > 78125
  #error "FAST_PWM_FREQUENCY maximum value is 78125Hz for ESP32."
#endif

#if HAS_TMC_SW_SERIAL
  #error "TMC220x Software Serial is not supported on ESP32."
#endif

#if ALL(WIFISUPPORT, ESP3D_WIFISUPPORT)
  #error "Only enable one WiFi option, either WIFISUPPORT or ESP3D_WIFISUPPORT."
#endif

#if ENABLED(POSTMORTEM_DEBUGGING)
  #error "POSTMORTEM_DEBUGGING is not yet supported on ESP32."
#endif

#if MB(MKS_TINYBEE) && ENABLED(FAST_PWM_FAN)
  #error "FAST_PWM_FAN is not available on TinyBee."
#endif

#if USING_PULLDOWNS
  #error "PULLDOWN pin mode is not available on ESP32 boards."
#endif

#if ALL(I2S_STEPPER_STREAM, LIN_ADVANCE) && DISABLED(EXPERIMENTAL_I2S_LA)
  #error "I2S stream is currently incompatible with LIN_ADVANCE."
#endif

#if ALL(I2S_STEPPER_STREAM, PRINTCOUNTER) && PRINTCOUNTER_SAVE_INTERVAL > 0 && DISABLED(PRINTCOUNTER_SYNC)
  #error "PRINTCOUNTER_SAVE_INTERVAL may cause issues on ESP32 with an I2S expander. Define PRINTCOUNTER_SYNC in Configuration.h for an imperfect solution."
#endif
