/*
 * main.c
 *
 *  Created on: Aug 9, 2021
 *      Author: Ahmed Salah
 */


#include <stdio.h>

unsigned int find_unique (unsigned int *nums, unsigned int length);

int main(void)
{
	unsigned int nums[20], length;

	while(1)
	{
		printf("Please Enter length of array: ");
		fflush(stdin);	fflush(stdout);
		scanf("%u", &length);

		int i;
		for(i=0; i<length; i++)
		{
			printf("Please Enter the element:%u of array: ", i+1);
			fflush(stdin);	fflush(stdout);
			scanf("%u", nums+i);
		}

		printf("\r\nThe unique number is %u \r\n", find_unique(nums,length));
	}
	return 0;}

unsigned int find_unique (unsigned int *nums, unsigned int length)
{
	unsigned int count[10] = {0};
	unsigned int unique_number = -1;

	int i;
	for(i=0; i<length; i++)
	{
		count[nums[i]]++;
	}

	for(i=0; i<10; i++)
	{
		if(count[i] == 1)
		{
			unique_number = i;
			break;
		}
		else
		{

		}
	}

	return unique_number;
}
