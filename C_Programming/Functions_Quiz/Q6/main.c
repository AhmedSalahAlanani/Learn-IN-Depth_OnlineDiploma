/*
 * main.c
 *
 *  Created on: Aug 8, 2021
 *      Author: Ahmed Salah
 */


#include <stdio.h>

int main(void)
{
	unsigned int num = 0;

	printf("Input the number: ");
	fflush(stdin);	fflush(stdout);
	scanf("%u", &num);

	printf("You Entered = %X\r\n", num);
	printf("The fourth bit = %d\r\n", num & 8);
	printf("The fourth bit = %d\r\n", (num & 8) >> 3);

	return 0;
}
