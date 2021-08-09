/*
 * main.c
 *
 *  Created on: Aug 9, 2021
 *      Author: Ahmed Salah
 */


#include <stdio.h>

unsigned int reverse_num (unsigned int num);

int main(void)
{
	unsigned int num;

	while(1)
	{
		printf("Please Enter a number: ");
		fflush(stdin);	fflush(stdout);
		scanf("%u", &num);

		printf("The reverse of the number %u is %u \r\n", num, reverse_num (num));
	}
	return 0;}

unsigned int reverse_num (unsigned int num)
{
	unsigned int rev_num = 0;

	while(num)
	{
		rev_num *= 10;
		rev_num += num%10;
		num /= 10;
	}

	return rev_num;
}
