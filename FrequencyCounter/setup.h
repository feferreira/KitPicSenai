/*This file is part of KitPicSenai.

    KitPicSenai is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    KitPicSenai is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with KitPicSenai.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef _SETUP
#define _SETUP

#pragma config FOSC=XT, WDTE=OFF, LVP=OFF
#define _XTAL_FREQ 4000000

enum{
    LCD_START_ADDRESS=0x30,
    DELAY_CMD_LCD=10    
};

inline void init_pic(void);
inline void config_interrupt(void);

#endif
