/*
 * main.c
 *
 *  Created on: Aug 1, 2021
 *      Author: Ahmed Salah
 */

#include <stdio.h>

int main(void)
{
	float num[3], largest;

	printf("Enter three numbers: ");
	fflush(stdin);		fflush(stdout);
	scanf("%f %f %f", num, num+1, num+2);

	int i;		largest = num[0];

	for(i = 0; i<sizeof(num)/sizeof(float); i++)
	{
		if(num[i] > largest)
		{
			largest = num[i];
		}
		else
		{

		}
	}

	printf("Largest number = %f\n", largest);

	return 0;
}
