/*
 * BMSBattery S series motor controllers firmware
 *
 * Copyright (C) Casainho, 2017.
 *
 * Released under the GPL License, Version 3
 */

#ifndef _MAIN_H_
#define _MAIN_H_

#define Q85 1
#define MOTOR_TYPE Q85

#define SVM_TABLE_LEN 360
#define SVM_TABLE_LEN_x1024 368640 //(360 * 1024)

#define ADC_THROTTLE_MIN_VALUE 175
#define ADC_THROTTLE_MAX_VALUE 730

#define MOTOR_ROTOR_DELTA_PHASE_ANGLE_RIGHT 315
#define PWM_CYCLES_COUNTER_MAX 1800000 //360*10000

#define PWM_VALUE_DUTY_CYCLE_MAX 511
#define MIDDLE_PWM_VALUE_DUTY_CYCLE_MAX 255 // PWM_VALUE_DUTY_CYCLE_MAX/2

#define ANGLE_1 0 // 360 * 4 * angle
#define ANGLE_60 60
#define ANGLE_120 120
#define ANGLE_180 180
#define ANGLE_240 240
#define ANGLE_300 300
#define ANGLE_360 360

#define ANGLE_60 60

#endif
