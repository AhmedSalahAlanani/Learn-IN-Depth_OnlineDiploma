/*
 * main.c
 *
 *  Created on: Aug 8, 2021
 *      Author: Ahmed Salah
 */


#include <stdio.h>

int main(void)
{
	int a[20], a_length, number, index = -1;

	printf("Enter length of array: ");
	fflush(stdin);	fflush(stdout);
	scanf("%d", &a_length);

	printf("Input: ");

	int i;
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

	printf("Enter the number you are looking for: ");
	fflush(stdin);	fflush(stdout);
	scanf("%d", &number);


	for(i=0; i<a_length; i++)
	{
		if(a[i] == number)
		{
			index = i;
		}
		else
		{

		}
	}


	printf("The last occurrence at: %d\r\n",index);


	return 0;
}

