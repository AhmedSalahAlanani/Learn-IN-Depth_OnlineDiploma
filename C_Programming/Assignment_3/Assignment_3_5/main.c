/*
 * main.c
 *
 *  Created on: Aug 3, 2021
 *      Author: Ahmed Salah
 */

#include <stdio.h>

int main(void)
{
	int a[100], n, num;

	printf("Enter no of Elements: ");
	fflush(stdin);	fflush(stdout);
	scanf("%d", &n);

	int i;
	for(i=0; i<n; i++)
	{
		fflush(stdin);	fflush(stdout);
		scanf("%d", a+i);
	}

	printf("Enter the element to be searched: ");
	fflush(stdin);	fflush(stdout);
	scanf("%d", &num);

	for(i=0; i<n; i++)
	{
		if(a[i] == num)
		{
			printf("Number found at the location =  %d\n", i+1);
			break;
		}
		else
		{
			/* Do nothing */
		}
	}

	if(i == n)
	{
		printf("Number wasn't found\n");
	}

	return 0;
}

