/*
 * main.c
 *
 *  Created on: Aug 1, 2021
 *      Author: Ahmed Salah
 */

#include <stdio.h>

int main(void)
{
	float a,b,temp;

	printf("Enter value of a: ");
	fflush(stdin);		fflush(stdout);
	scanf("%f", &a);

	printf("Enter value of b: ");
	fflush(stdin);		fflush(stdout);
	scanf("%f", &b);

	temp = a;
	a = b;
	b = temp;

	printf("After swapping, value of a = %f\n", a);
	printf("After swapping, value of b = %f\n", b);

	return 0;
}


