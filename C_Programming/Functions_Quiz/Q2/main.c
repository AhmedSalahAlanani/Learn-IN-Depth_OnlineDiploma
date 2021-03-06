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
	int b[20], b_length;

	printf("Enter length of first array: ");
	fflush(stdin);	fflush(stdout);
	scanf("%d", &a_length);

	printf("Enter the first array: ");

	int i;
	for(i=0; i<a_length; i++)
	{
		fflush(stdin);	fflush(stdout);
		scanf("%d", a+i);
	}

	printf("Enter length of second array: ");
	fflush(stdin);	fflush(stdout);
	scanf("%d", &b_length);

	printf("Enter the second array: ");

	for(i=0; i<b_length; i++)
	{
		fflush(stdin);	fflush(stdout);
		scanf("%d", b+i);
	}

	printf("The two arrays before swap: \r\n");

	printf("The first array = ");

	for(i=0; i<a_length; i++)
	{
		printf("%d ",a[i]);
	}
	printf("\r\n");

	printf("The second array = ");
	for(i=0; i<b_length; i++)
	{
		printf("%d ",b[i]);
	}
	printf("\r\n");


	int min, max;

	(a_length > b_length)? (min = b_length, max = a_length) : (min = a_length, max = b_length);

	int temp;
	for(i=0; i<min; i++)
	{
		temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}


	if(max == a_length)
	{
		for(; i<a_length; i++)
		{
			b[i] = a[i];
		}
	}
	else
	{
		for(; i<b_length; i++)
		{
			a[i] = b[i];
		}
	}

	printf("The two arrays after swap: \r\n");

	printf("The first array = ");

	for(i=0; i<b_length; i++)
	{
		printf("%d ",a[i]);
	}
	printf("\r\n");

	printf("The second array = ");
	for(i=0; i<a_length; i++)
	{
		printf("%d ",b[i]);
	}
	printf("\r\n");


	return 0;
}
