/*
 * main.c
 *
 *  Created on: Aug 3, 2021
 *      Author: Ahmed Salah
 */


#include <stdio.h>

int main(void)
{
	float a[100][100];
	int r,c;

	printf("Enter rows and columns of Matrix: ");
	fflush(stdin);	fflush(stdout);
	scanf("%d %d", &r, &c);

	printf("Enter the Elements of Matrix: \n");
	{
		int i,j;
		for(i=0; i<r; i++)
		{
			for(j=0; j<c; j++)
			{
				printf("Enter element a%d%d: ",i+1,j+1);
				fflush(stdin);	fflush(stdout);
				scanf("%f", (*(a+i))+j);
			}
		}
	}

	printf("Entered Matrix: \n");
	{
		int i,j;
		for(i=0; i<r; i++)
		{
			for(j=0; j<c; j++)
			{
				printf("%f ", a[i][j]);
			}

			printf("\n");
		}
	}


	printf("Transpose of Matrix: \n");
	{
		int i,j;
		for(i=0; i<c; i++)
		{
			for(j=0; j<r; j++)
			{
				printf("%f ", a[j][i]);
			}

			printf("\n");
		}
	}

	return 0;
}

