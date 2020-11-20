/* 
 * File:   pinout.h
 * Author: ASUS
 *
 * Created on 17 de noviembre de 2020, 08:24 AM
 */

#include <xc.h>

#ifndef PINOUT_H
#define	PINOUT_H

#ifdef	__cplusplus
extern "C" {
#endif

#define INPUT 1
#define OUTPUT 0

#define ON 1
#define OFF 0
    
#define BTN_EFECTO TRISBbits.TRISB7
#define CFG_LEDS TRISD
#define LEDS LATD
    
    
#ifdef	__cplusplus
}
#endif

#endif	/* PINOUT_H */

