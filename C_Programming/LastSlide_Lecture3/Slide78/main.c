/*
 * main.c
 *
 *  Created on: Aug 1, 2021
 *      Author: Ahmed Salah
 */


#include <stdio.h>

int main(void)
{
	int n;

	printf("Enter number of rows: ");
	fflush(stdin);		fflush(stdout);
	scanf("%d", &n);

	int i;
	for(i=0; i<=n; i++)
	{
		int j;
		for(j=i; j<=n; j++)
		{
			printf("%d ",j);
		}

		printf("\n",j);
	}

	return 0;
}
