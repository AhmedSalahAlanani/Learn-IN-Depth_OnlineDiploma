/*
 * main.c
 *
 *  Created on: Aug 9, 2021
 *      Author: Ahmed Salah
 */

#include <stdio.h>

int sum_digits(unsigned int num);

int main(void)
{
	unsigned int num;

	while(1)
	{
		printf("Please Enter a number: ");
		fflush(stdin);	fflush(stdout);
		scanf("%u", &num);

		printf("The sum of digits = %u \r\n", sum_digits(num));
	}
	return 0;
}


int sum_digits(unsigned int num)
{
	int sum = 0;

	while(num)
	{
		sum += num % 10;
		num /= 10;
	}

	return sum;
}
