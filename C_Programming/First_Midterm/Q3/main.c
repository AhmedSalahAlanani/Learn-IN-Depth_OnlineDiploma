/*
 * main.c
 *
 *  Created on: Aug 9, 2021
 *      Author: Ahmed Salah
 */


#include <stdio.h>

void print_prime(unsigned int num1, unsigned int num2);

int main(void)
{
	unsigned int num1, num2;

	while(1)
	{
		printf("\r\nPlease Enter first number: ");
		fflush(stdin);	fflush(stdout);
		scanf("%u", &num1);

		printf("Please Enter second number: ");
		fflush(stdin);	fflush(stdout);
		scanf("%u", &num2);

		printf("The prime numbers between %u and %u are: \r\n", num1, num2);
		print_prime(num1,num2);
	}
	return 0;}

void print_prime(unsigned int num1, unsigned int num2)
{
	int i,j,state;

	for(i=num1; i<=num2; i++)
	{
		state = 1;
		for(j = i-1; j>1; j--)
		{
			if(i%j != 0)
			{

			}
			else
			{
				state = 0;
				break;
			}
		}

		if(state == 1)
		{
			printf("%u ",i);
		}
		else
		{

		}
	}
}
