/*
 * main.c
 *
 *  Created on: Aug 1, 2021
 *      Author: Ahmed Salah
 */
#include <stdio.h>

int main(void)
{
	float x,y;
		printf("Enter two numbers: ");
		fflush(stdin);		fflush(stdout);
		scanf("%f %f", &x, &y);
		printf("Product: %f", x*y);

	return 0;
}
