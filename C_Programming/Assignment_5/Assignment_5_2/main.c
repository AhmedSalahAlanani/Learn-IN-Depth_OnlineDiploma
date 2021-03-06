/*
 * main.c
 *
 *  Created on: Aug 17, 2021
 *      Author: Ahmed Salah
 */


#include <stdio.h>

struct Sdistance
{
	int feet;
	float inch;
} distance_1;


struct Sdistance add_distances(struct Sdistance distance_1, struct Sdistance distance_2)
{
	struct Sdistance sum;

	sum.inch = distance_1.inch + distance_2.inch;
	sum.feet = distance_1.feet + distance_2.feet;

	if(sum.inch / 12)
	{
		sum.feet++;
		sum.inch -= 12;
	}

	return sum;
}

int main (void)
{
	struct Sdistance distance_2, temp;

	printf("Enter information for 1st distance: \r\n");

	printf("Enter feet: ");
	fflush(stdin);	fflush(stdout);
	scanf("%d",&distance_1.feet);

	printf("Enter inch: ");
	fflush(stdin);	fflush(stdout);
	scanf("%f",&distance_1.inch);

	printf("\r\nEnter information for 2nd distance: \r\n");

	printf("Enter feet: ");
	fflush(stdin);	fflush(stdout);
	scanf("%d",&distance_2.feet);

	printf("Enter inch: ");
	fflush(stdin);	fflush(stdout);
	scanf("%f",&distance_2.inch);

	temp = add_distances(distance_1, distance_2);

	printf("Sum of distances = %d' - %f \r\n", temp.feet, temp.inch);

	return 0;
}

