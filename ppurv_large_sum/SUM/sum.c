/*
 * sum.c
 *
 *  Created on: Oct 18, 2019
 *      Author: Luka Karan
 */
#include "sum.h"
//const bool true = 1;
//const bool false = 0;

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


char* stringReverese(char* str)
{
      char* begin;
      char* end;

      if (((! str) || (!* str)) != 0)
      {
            return str;
      }
      begin = str;

      for (end = str + strlen(str) - 1; end > begin; (++begin, --end))
      {
            * begin ^= * end;
            * end ^= * begin;
            * begin ^= * end;
      }

      return str;
}

int chrtoint(char symbol)
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


void summNumbers(char num1[], char num2[]){

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

	for (iCounter = 0; iCounter < lenMax; iCounter++)
	{
		if ((lenNum1 == lenNum2) || ((iCounter < lenNum1) && (iCounter < lenNum2)))
		{
			sum = carry + chrtoint(num1[iCounter]) + chrtoint(num2[iCounter]);
		}
		else if ( iCounter >=lenNum1 )
		{
			sum = carry + chrtoint(num2[iCounter]);
		}
		else if (iCounter >= lenNum2)
		{
			sum = carry + chrtoint(num1[iCounter]);
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
		iCounter++;
	}

	printf("\nResult: ");

	for (jCounter = 0; jCounter < iCounter; jCounter++)
	{
		printf("%"PRIdLEAST8, result[iCounter-jCounter-1]);
	}

}

