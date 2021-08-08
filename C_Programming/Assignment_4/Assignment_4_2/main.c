/*
 * main.c
 *
 *  Created on: Aug 8, 2021
 *      Author: Ahmed Salah
 */

#include <stdio.h>

int calc_fact(int n)
{
	if(n > 1)
	{
		return n * calc_fact(n-1);
	}
	else
	{
		return 1;
	}
}

int main(void)
{
	int number;

	printf("Enter a positive integer: \r\n");
	fflush(stdin);	fflush(stdout);
	scanf("%d", &number);

	printf("Factorial of %d = %d\r\n", number, calc_fact(number));

	return 0;
}
