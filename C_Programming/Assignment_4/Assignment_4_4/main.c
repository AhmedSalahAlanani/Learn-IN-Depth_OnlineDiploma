/*
 * main.c
 *
 *  Created on: Aug 8, 2021
 *      Author: Ahmed Salah
 */


#include <stdio.h>

int calc_pow(int base, int power);

int main(void)
{
	int base, power;

	printf("Enter Base number: ");
	fflush(stdin);	fflush(stdout);
	scanf("%d", &base);

	printf("Enter Power number: ");
	fflush(stdin);	fflush(stdout);
	scanf("%d", &power);

	printf("%d ^ %d = %d",base,power,calc_pow(base,power));

	return 0;
}


int calc_pow(int base, int power)
{
	if(power == 1)
	{
		return base;
	}
	else
	{
		return base * calc_pow(base,power-1);
	}
}
