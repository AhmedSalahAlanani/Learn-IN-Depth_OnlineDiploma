/*
 * main.c
 *
 *  Created on: Aug 1, 2021
 *      Author: Ahmed Salah
 */
#include <stdio.h>

int main(void)
{
	int x,y;
	printf("Enter two integers: ");
	fflush(stdin);		fflush(stdout);
	scanf("%d %d", &x, &y);
	printf("Sum: %d", x+y);

	return 0;
}
