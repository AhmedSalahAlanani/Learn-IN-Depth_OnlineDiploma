/*
 * main.c
 *
 *  Created on: Aug 1, 2021
 *      Author: Ahmed Salah
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
	float a;
	char type[9];

	printf("Enter a number: ");
	fflush(stdin);		fflush(stdout);
	scanf("%f", &a);

	if(a != 0)
	{
		if(a > 0)
		{
			strncpy(type, "Positive", 9);
		}
		else
		{
			 strncpy(type, "Negative", 9);
		}

		printf("%f is  %s", a, type);
		}
	else
	{
		printf("You Entered a Zero");
	}

	return 0;
}

