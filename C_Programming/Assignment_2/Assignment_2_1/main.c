/*
 * main.c
 *
 *  Created on: Aug 1, 2021
 *      Author: Ahmed Salah
 */

#include <stdio.h>

int main(void)
{
	int x;

	/* First Method */
	printf("Enter an integer you want to check: ");
	fflush(stdin);		fflush(stdout);
	scanf("%d", &x);

	printf("%d is %s \n", x, (x%2)?"Odd":"Even");

	return 0;
}


