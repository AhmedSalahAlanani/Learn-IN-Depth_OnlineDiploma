/*
 * main.c
 *
 *  Created on: Aug 3, 2021
 *      Author: Ahmed Salah
 */

#include <stdio.h>

int main(void)
{
	float a[100];
	int n;

	printf("Enter the numbers of data: ");
	fflush(stdin);	fflush(stdout);
	scanf("%d", &n);

	int i;
	for(i=0; i<n; i++)
	{
		printf("%d. Enter number: ", i+1);
		fflush(stdin);	fflush(stdout);
		scanf("%f", a+i);
	}

	float sum;
	for(i=0, sum =0; i<n; i++)
	{
		sum += a[i];
	}

	printf("Average =  %f", sum/n);

	return 0;
}

