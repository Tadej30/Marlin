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

//
// lcd/dogm/status/skrpro.h - Status Screen skrpro bitmaps
//

#if !STATUS_SKRPRO_WIDTH && HAS_TEMP_SKRPRO && ((HOTENDS <= 4 && !HAS_HEATED_BED) || (HOTENDS <= 3 && HAS_HEATED_BED))
  #define STATUS_SKRPRO_WIDTH 21
  #if STATUS_HEATERS_WIDTH
    #if ENABLED(STATUS_COMBINE_HEATERS)
      #define STATUS_SKRPRO_X (LCD_PIXEL_WIDTH - 2 - (STATUS_SKRPRO_BYTEWIDTH) * 8)
    #elif HAS_FAN0 && HAS_HEATED_BED && HOTENDS <= 2
      #define STATUS_SKRPRO_X (LCD_PIXEL_WIDTH - 2 - (STATUS_HEATERS_BYTEWIDTH - STATUS_SKRPRO_BYTEWIDTH) * 8)
    #elif HAS_FAN0 && !HAS_HEATED_BED
      #define STATUS_SKRPRO_X (LCD_PIXEL_WIDTH - (STATUS_SKRPRO_BYTEWIDTH + STATUS_FAN_BYTEWIDTH) * 8)
    #else
      #define STATUS_SKRPRO_X (LCD_PIXEL_WIDTH - (STATUS_SKRPRO_BYTEWIDTH) * 8)
    #endif
  #endif

  #ifdef STATUS_SKRPRO_ANIM

    const unsigned char status_skrpro_bmp[] PROGMEM = {

      B11111111,B11111111,B11111111, // ########################
      B10000000,B00000000,B00000001, // #......................#
      B10001010,B10101010,B10101001, // #...#.#.#.#.#.#.#.#.#..#
      B10011111,B11111111,B11111101, // #..###################.#
      B10011001,B01010100,B01110101, // #..##..#.#.#.#...###.#.#
      B10010111,B01010101,B10111101, // #..#.###.#.#.#.##.####.#
      B10010111,B00010100,B01111101, // #..#.###...#.#...#####.#
      B10011001,B01010101,B11111101, // #..##..#.#.#.#.#######.#
      B10011111,B11111111,B11111101, // #..###################.#
      B10001010,B10101010,B10101001, // #...#.#.#.#.#.#.#.#.#..#
      B10000000,B00000000,B00000001, // #......................#
      B11111111,B11111111,B11111111  // ########################
  

};

      const unsigned char status_skrpro_on_bmp[] PROGMEM = {
      B00011111,B11111111,B11111000,
      B00010000,B00000000,B00001000,
      B00010000,B10000100,B00001000,
      B00010000,B01000010,B00001000,
      B00010000,B01000010,B00001000,
      B00010000,B10000100,B00001000,
      B00010001,B00001000,B00001000,
      B00010001,B00001000,B00001000,
      B00010000,B10000100,B00001000,
      B00010000,B00000000,B00001000,
      B00011111,B11111111,B11111000,
      B00011111,B11111111,B11111000
    };

  #else

    const unsigned char status_skrpro_bmp[] PROGMEM = {
      B00011111,B11111111,B11111000,
      B00010000,B00000000,B00001000,
      B00010000,B10000100,B00001000,
      B00010000,B01000010,B00001000,
      B00010000,B01000010,B00001000,
      B00010000,B10000100,B00001000,
      B00010001,B00001000,B00001000,
      B00010001,B00001000,B00001000,
      B00010000,B10000100,B00001000,
      B00010000,B00000000,B00001000,
      B00011111,B11111111,B11111000,
      B00011111,B11111111,B11111000
    };

  #endif
#endif
#ifndef STATUS_SKRPRO_WIDTH
  #define STATUS_SKRPRO_WIDTH 0
#endif
