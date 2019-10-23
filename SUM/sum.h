/*
 * sum.h
 *
 *  Created on: Oct 18, 2019
 *      Author: rtrk
 */

#ifndef SUM_H_
#define SUM_H_

/*stdarg.h*/
#pragma CHECK_MISRA("-1")
#pragma CHECK_MISRA("-19")
#pragma CHECK_MISRA("-20")

/*stdio.h*/
#pragma CHECK_MISRA("-2")
#pragma CHECK_MISRA("-6")
#pragma CHECK_MISRA("-8")
#pragma CHECK_MISRA("-16")


#include <stdio.h>
#include <string.h>
#include <inttypes.h>
#include  "pragma.h"


#define MAX 100

int myAtoi(char* str);
int_least8_t isDigit(int_least8_t c);
int_least8_t charToInteger(int_least8_t symbol);
int_least8_t *stringReverese(int_least8_t *str);
void summNumbers( int_least8_t num1[], int_least8_t num2[]);


#endif
