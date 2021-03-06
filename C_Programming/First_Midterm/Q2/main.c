/*
 * main.c
 *
 *  Created on: Aug 9, 2021
 *      Author: Ahmed Salah
 */


#include <stdio.h>

float calc_sqrroot(unsigned int num);

int main(void)
{
	unsigned int num;

	while(1)
	{
		printf("Please Enter a number: ");
		fflush(stdin);	fflush(stdout);
		scanf("%u", &num);

		printf("The root of %d = %f \r\n", num, calc_sqrroot(num));
	}
	return 0;}

float calc_sqrroot(unsigned int num)
{
	float root = 0.000001;

	while(num/root > root)
	{
		root += 0.000001;
	}

	return root;
}
