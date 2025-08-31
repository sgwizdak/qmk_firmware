/* Copyright 2023 Colin Lam (Ploopy Corporation)
 * Copyright 2020 Christopher Courtney, aka Drashna Jael're  (@drashna) <drashna@live.com>
 * Copyright 2019 Sunjun Kim
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

/*
 * How to read this:
 * [0] = LAYOUT( KC_BTN3, KC_BTN5, DRAG_SCROLL, KC_BTN4, KC_BTN1, KC_BTN2 )
 *   Bottom Left: mouse button 1 - left click
 *   Bottom Right: mouse button 2 - right click
 *   Top Left: mouse button 3
 *   Top Right: mouse button 4 - used to switch applications
 *   Top Middle Left: mouse button 5
 *   Top Middle Right: drag scroll
 *   we have added: DRAG_SELECT
 * [0] = LAYOUT( KC_BTN3, DPI_CONFIG, DRAG_SELECT, DRAG_SCROLL, KC_BTN2, KC_BTN1 )
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // [0] = LAYOUT( KC_BTN4, KC_BTN5, DRAG_SCROLL, KC_BTN2, KC_BTN1, KC_BTN3 )
    [0] = LAYOUT( KC_BTN3, DPI_CONFIG, DRAG_SELECT, DRAG_SCROLL, KC_BTN2, KC_BTN1 )
};

