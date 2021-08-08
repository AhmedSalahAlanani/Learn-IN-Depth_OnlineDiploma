/*
 * main.c
 *
 *  Created on: Aug 8, 2021
 *      Author: Ahmed Salah
 */


#include <stdio.h>

int main(void)
{
	unsigned int num;
	int bit_num;

	printf("Enter the number: ");
	fflush(stdin);	fflush(stdout);
	scanf("%u", &num);

	printf("Enter the bit number: ");
	fflush(stdin);	fflush(stdout);
	scanf("%u", &bit_num);

	printf("The number before = %X \r\n", num);

	if(bit_num > -1)
	{
		num &= ~(1<<bit_num);
	}
	else
	{

	}

	printf("The number becomes = %X \r\n", num);

	return 0;
}
