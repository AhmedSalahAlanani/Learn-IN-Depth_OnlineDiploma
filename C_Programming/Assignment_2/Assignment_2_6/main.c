/*
 * main.c
 *
 *  Created on: Aug 1, 2021
 *      Author: Ahmed Salah
 */


#include <stdio.h>

int main(void)
{
	int n,sum = 0;

	printf("Enter a integer: ");
	fflush(stdin);		fflush(stdout);
	scanf("%d", &n);

	int i;
	for(i=0; i<=n; i++)
	{
		sum += i;
	}

	printf("Sum = %d", sum);

	return 0;
}

