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
#include <xc.h>
#include <pic16f877a.h>
#include "setup.h"
#include "keyboard.h"

char varre_tecla(){
    char num = 0;
    nRBPU = 0;
    TRISB = 0b00011111;
    PORTB = 0x00;
    while(num == 0){
        col1 = 0;
        col2 = col3 = 1;
        switch (PORTB){
            case 0b01101111:
                num = 1;
                break;
            case 0b01110111:
                num = 4;
                break;
            case 0b01111011:
                num = 7;
                break;
        }
        col2 = 0;
        col1 = col3 = 1;
        switch (PORTB){
            case 0b10101111:
                num = 2;
                break;
            case 0b10110111:
                num = 5;
                break;
            case 0b10111011:
                num = 8;
                break;
        }
        col3 = 0;
        col1 = col2 = 1;
        switch (PORTB){
            case 0b11001111:
                num = 3;
                break;
            case 0b11010111:
                num = 6;
                break;
            case 0b11011011:
                num = 9;
                break;
        }
        col1 = col2 = col3 = 0;
        while (PORTB != 0b00011111);
        __delay_ms(200);
    }
    
    return num;
}
