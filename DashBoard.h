#pragma once
#ifndef F_CPU
#define F_CPU 16000000
#endif

#include <avr/sleep.h>
#include <inttypes.h>
#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>
#include <math.h>
#include "7 segments.h"
#include "Wheel_sensor.h"
#include "RPM_sensor.h"
#include "kill_putton.h"

#define EVEN 0
#define ODD 1

#define sbi(reg,pin) reg|=_BV(pin)
#define cbi(reg,pin) reg&=~_BV(pin)
#define tbi(reg,pin) reg^=_BV(pin)
#define is_high(reg,pin) (((reg)&_BV(pin))==1)




	

