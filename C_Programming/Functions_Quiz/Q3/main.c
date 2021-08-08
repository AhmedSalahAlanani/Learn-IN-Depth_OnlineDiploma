/*
 * main.c
 *
 *  Created on: Aug 8, 2021
 *      Author: Ahmed Salah
 */


#include <stdio.h>

int main(void)
{
	int a[20], a_length;

	printf("Enter length of array: ");
	fflush(stdin);	fflush(stdout);
	scanf("%d", &a_length);

	printf("Input: ");

	int i,j,temp;
	for(i=0; i<a_length; i++)
	{
		fflush(stdin);	fflush(stdout);
		scanf("%d", a+i);
	}

	printf("You entered = ");

	for(i=0; i<a_length; i++)
	{
		printf("%d ",a[i]);
	}
	printf("\r\n");


	for(i=0; i<a_length; i++)
	{
		for(j = a_length-1; j>i; j--)
		{
			temp = a[j];
			a[j] = a[j-1];
			a[j-1] = temp;
		}
	}




	printf("Output: ");

	for(i=0; i<a_length; i++)
	{
		printf("%d ",a[i]);
	}
	printf("\r\n");



	return 0;
}
