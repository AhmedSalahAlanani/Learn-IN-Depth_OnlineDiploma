/*
 * main.c
 *
 *  Created on: Aug 9, 2021
 *      Author: Ahmed Salah
 */


#include <stdio.h>

unsigned int sum_num (unsigned int num);

int main(void)
{
	unsigned int num;

	while(1)
	{
		printf("Please Enter a number: ");
		fflush(stdin);	fflush(stdout);
		scanf("%u", &num);


		printf("\r\nThe sum from 1 to the number %u is %u \r\n", num, sum_num(num));
	}
	return 0;
}

unsigned int sum_num (unsigned int num)
{
	if(num == 1)
	{
		return 1;
	}
	else
	{
		return num + sum_num (num-1);
	}
}
