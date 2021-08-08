/*
 * main.c
 *
 *  Created on: Aug 8, 2021
 *      Author: Ahmed Salah
 */

#include <stdio.h>

void print_primenumbers(int lower, int upper)
{
	int i,state;
	for(i = lower; i<= upper; i++)
	{
		int j;
		for(j = i-1; j>1; j--)
		{
			if(i % j)
			{
				state = 1;
			}
			else
			{
				state = 0;
				break;
			}
		}
		if(state == 1)
		{
			printf("%d ",i);
		}
		else
		{

		}
	}
}

int main(void)
{
	int lower,upper;

	printf("Enter Two numbers (Intervals): \r\n");
	fflush(stdin);	fflush(stdout);
	scanf("%d %d", &lower, &upper);

	printf("Prime numbers between %d and %d are: \r\n", lower, upper);

	print_primenumbers(lower,upper);

	return 0;
}
