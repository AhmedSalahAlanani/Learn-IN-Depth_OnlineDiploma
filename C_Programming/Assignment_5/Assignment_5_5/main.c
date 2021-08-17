/*
 * main.c
 *
 *  Created on: Aug 18, 2021
 *      Author: Ahmed Salah
 */


#include <stdio.h>

#define Area(r)	((float)(3.14*r*r))


int main (void)
{
	float radius;

	printf("Enter the radius: ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &radius);


	printf("Area = %f \r\n", Area(radius));


	return 0;
}

