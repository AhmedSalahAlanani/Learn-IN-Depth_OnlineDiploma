/*
 * main.c
 *
 *  Created on: Aug 3, 2021
 *      Author: Ahmed Salah
 */

#include <stdio.h>

int main(void)
{
	int a[100],n,loc;

	printf("Enter no of Elements: ");
	fflush(stdin);	fflush(stdout);
	scanf("%d", &n);

	int i;
	for(i=0; i<n; i++)
	{
		fflush(stdin);	fflush(stdout);
		scanf("%d", a+i);
	}

	printf("Enter the Element to be inserted: ");
	fflush(stdin);	fflush(stdout);
	scanf("%d", a+n);

	printf("Enter the location: ");
	fflush(stdin);	fflush(stdout);
	scanf("%d", &loc);

	for(i=n; i>loc-1; i--)
	{
		a[i-1] ^= a[i];
		a[i] ^= a[i-1];
		a[i-1] ^= a[i];
	}

	for(i=0; i<=n; i++)
	{
		printf("%d ", a[i]);
	}

	return 0;
}


