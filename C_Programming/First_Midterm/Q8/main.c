/*
 * main.c
 *
 *  Created on: Aug 9, 2021
 *      Author: Ahmed Salah
 */


#include <stdio.h>

void rev_arr(int *arr, int length);

int main(void)
{
	int arr[20], length;

	printf("Please insert the length of array: ");
	fflush(stdin); fflush(stdout);
	scanf("%u", &length);

	int i;
	for(i=0; i<length; i++)
	{
		fflush(stdin); fflush(stdout);
		scanf("%d", arr+i);
	}

	printf("You Entered: ");

	for(i=0; i<length; i++)
	{
		fflush(stdin); fflush(stdout);
		printf("%d ", arr[i]);
	}

	rev_arr(arr,length);

	printf("The reversed array: ");

	for(i=0; i<length; i++)
	{
		fflush(stdin); fflush(stdout);
		printf("%d ", arr[i]);
	}


	return 0;
}


void rev_arr(int *arr, int length)
{
	int i,j;

	for(i=0; i<length; i++)
	{
		for(j= length-1; j>i; j--)
		{
			arr[j] ^= arr[j-1];
			arr[j-1] ^= arr[j];
			arr[j] ^= arr[j-1];
		}
	}

}
