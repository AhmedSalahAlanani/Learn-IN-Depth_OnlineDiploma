/*
 * main.c
 *
 *  Created on: Aug 18, 2021
 *      Author: Ahmed Salah
 */


#include <stdio.h>

struct Scomplex
{
	float m_real;
	float m_imaginary;
};


struct Scomplex add_complex (struct Scomplex num_1, struct Scomplex num_2)
{
	struct Scomplex sum;

	sum.m_real = num_1.m_real + num_2.m_real;
	sum.m_imaginary = num_1.m_imaginary + num_2.m_imaginary;

	return sum;
}

int main (void)
{
	struct Scomplex num1, num2, sum;

	printf("For 1st complex number: \r\n");
	printf("Enter real and imaginary respectively: ");
	fflush(stdin);	fflush(stdout);
	scanf("%f %f",&num1.m_real, &num1.m_imaginary);

	printf("\r \nFor 2nd complex number: \r\n");
	printf("Enter real and imaginary respectively: ");
	fflush(stdin);	fflush(stdout);
	scanf("%f %f",&num2.m_real, &num2.m_imaginary);


	sum = add_complex (num1, num2);

	printf("Sum = %f + %fi \r\n", sum.m_real, sum.m_imaginary);

	return 0;
}

