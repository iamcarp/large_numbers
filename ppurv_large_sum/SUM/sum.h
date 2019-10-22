/*
 * sum.h
 *
 *  Created on: Oct 18, 2019
 *      Author: rtrk
 */

#ifndef SUM_H_
#define SUM_H_

#include <stdio.h>
#include <string.h>
#include <inttypes.h>



#define MAX 100


//typedef int_least8_t bool;

//bool isDigit(int_least8_t c);
int_least8_t isDigit(int_least8_t c);
int_least8_t charToInteger(int_least8_t symbol);
int_least8_t *stringReverese(int_least8_t *str);
void summNumbers( int_least8_t num1[], int_least8_t num2[]);


#endif

