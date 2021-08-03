/*
 * main.c
 *
 *  Created on: Aug 3, 2021
 *      Author: Ahmed Salah
 */


#include <stdio.h>

int main(void)
{
	float a[2][2], b[2][2];

	printf("Enter the Elements of 1st Matrix: \n");
	{
		int i,j;
		for(i=0; i<sizeof(a)/sizeof(a[0]); i++)
		{
			for(j=0; j<sizeof(a[0])/sizeof(a[0][0]); j++)
			{
				printf("Enter a%d%d: ",i+1,j+1);
				fflush(stdin);		fflush(stdout);
				scanf("%f", (*(a+i))+j);
			}
		}
	}

	printf("Enter the Elements of 2nd Matrix: \n");
	{
		int i,j;
		for(i=0; i<sizeof(b)/sizeof(b[0]); i++)
		{
			for(j=0; j<sizeof(b[0])/sizeof(b[0][0]); j++)
			{
				printf("Enter b%d%d: ",i+1,j+1);
				fflush(stdin);		fflush(stdout);
				scanf("%f", (*(b+i))+j);
			}
		}
	}

	printf("Sum of Matrix: \n");
	{
		int i,j;
		for(i=0; i<sizeof(b)/sizeof(b[0]); i++)
		{
			for(j=0; j<sizeof(b[0])/sizeof(b[0][0]); j++)
			{
				printf("%f ", a[i][j] + b[i][j]);
			}

			printf("\n");
		}
	}


	return 0;
}
