/*
 * main.c
 *
 *  Created on: Aug 9, 2021
 *      Author: Ahmed Salah
 */


#include <stdio.h>

unsigned int count_ones (unsigned int num);

int main(void)
{
	unsigned int num;

	while(1)
	{
		printf("Please Enter a number: ");
		fflush(stdin);	fflush(stdout);
		scanf("%u", &num);

		printf("The number of ones in  %u is %u \r\n", num, count_ones(num));
	}
	return 0;}

unsigned int count_ones (unsigned int num)
{
	unsigned int count = 0;

	while(num)
	{
		count += num%2;
		num /= 2;
	}

	return count;
}
