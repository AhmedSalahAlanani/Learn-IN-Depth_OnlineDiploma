/*
 * main.c
 *
 *  Created on: Aug 1, 2021
 *      Author: Ahmed Salah
 */

#include <stdio.h>

int main(void)
{
	float a,b;

	/* First Method */
	printf("Enter value of a: ");
	fflush(stdin);		fflush(stdout);
	scanf("%f", &a);

	printf("Enter value of b: ");
	fflush(stdin);		fflush(stdout);
	scanf("%f", &b);

	*((int*)(&a)) = *((int*)(&a)) ^ *((int*)(&b));
	*((int*)(&b)) = *((int*)(&a)) ^ *((int*)(&b));
	*((int*)(&a)) = *((int*)(&a)) ^ *((int*)(&b));

	printf("After swapping, value of a = %f\n", a);
	printf("After swapping, value of b = %f\n", b);

	/* Second Method */
	printf("Enter value of a: ");
	fflush(stdin);		fflush(stdout);
	scanf("%f", &a);

	printf("Enter value of b: ");
	fflush(stdin);		fflush(stdout);
	scanf("%f", &b);

	a += b;
	b = a-b;
	a = a-b;

	printf("After swapping, value of a = %f\n", a);
	printf("After swapping, value of b = %f\n", b);

	return 0;
}

