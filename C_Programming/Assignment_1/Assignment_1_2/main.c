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
	printf("Enter a integer: ");
	fflush(stdin);		fflush(stdout);
	scanf("%d", &x);
	printf("You entered: %d", x);

	return 0;
}
