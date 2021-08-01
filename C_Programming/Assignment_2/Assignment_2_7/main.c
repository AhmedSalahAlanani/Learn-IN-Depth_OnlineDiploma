/*
 * main.c
 *
 *  Created on: Aug 1, 2021
 *      Author: Ahmed Salah
 */


#include <stdio.h>

int main(void)
{
	int n,factorial = 1;

	printf("Enter a integer: ");
	fflush(stdin);		fflush(stdout);
	scanf("%d", &n);

	if(n < 0)
	{
		printf("Error!!! Factorial of negative number doesn't exist");
	}
	else
	{
		int i;
		for(i=1; i<=n; i++)
		{
			factorial *= i;
		}

		printf("Factorial = %d", factorial);
	}

	return 0;
}


