/*
 * sum.c
 *
 *  Created on: Oct 18, 2019
 *      Author: Luka Karan
 */
#include "sum.h"


int_least8_t isDigit(int_least8_t c)
{
	if ((c >= '0') && (c <= '9'))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int_least8_t charToInteger(int_least8_t symbol)
{
	int_least8_t counter;
	for (counter = 48; counter <= 57; counter++)
	{
		if (toascii(counter) == symbol)
			{
			return counter-48;
			}
	}
	return 0;
}

int_least8_t* stringReverese(int_least8_t* str)
{
	int_least8_t* begin;
	int_least8_t* end;

	begin = str;

	for (end = str + strlen(str) - 1; end > begin; (++begin, --end))
	{
		* begin ^= * end;
		* end ^= * begin;
		* begin ^= * end;

	}

	return str;
	}




void summNumbers(int_least8_t num1[], int_least8_t num2[]){

	int_least8_t result[180];
	int_least8_t lenNum1;
	int_least8_t lenNum2;
	int_least8_t lenMax;
	int_least8_t sum;
	int_least8_t iCounter;
	int_least8_t jCounter;
	int_least8_t carry;

	lenNum1 = strlen(num1);
	lenNum2 = strlen(num2);

	stringReverese(num1);
	stringReverese(num2);

	lenMax = lenNum1;
	if (lenNum1 < lenNum2)
	{
		lenMax = lenNum2;
	}

	carry=0;

	for (iCounter = 0; iCounter < lenMax; (iCounter=iCounter+1))
	{
		if ((lenNum1 == lenNum2) || ((iCounter < lenNum1) && (iCounter < lenNum2)))
		{
			sum = carry + charToInteger(num1[iCounter]) + charToInteger(num2[iCounter]);
		}
		else if ( iCounter >= lenNum1 )
		{
			sum = carry + charToInteger(num2[iCounter]);
		}
		else if (iCounter >= lenNum2)
		{
			sum = carry + charToInteger(num1[iCounter]);
		}
		else
		{
			break;
		}

		result[iCounter] = sum % 10;
		carry = sum / 10;
	}

	if (carry)
	{
		result[iCounter] = carry;
		iCounter = iCounter + 1;
	}

	printf("\nResult: ");

	for (jCounter = 0; jCounter < iCounter; (jCounter = jCounter + 1))
	{
		printf("%"PRIdLEAST8, result[iCounter-jCounter-1]);
	}

}
