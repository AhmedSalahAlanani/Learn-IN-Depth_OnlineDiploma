/*
 * main.c
 *
 *  Created on: Aug 1, 2021
 *      Author: Ahmed Salah
 */


#include <stdio.h>
#include <string.h>

int main(void)
{
	char op;
	float a,b, result;

	printf("Enter operator either + or - or * or /: ");
	fflush(stdin);		fflush(stdout);
	scanf("%c", &op);

	printf("Enter two operands: ");
	fflush(stdin);		fflush(stdout);
	scanf("%f %f", &a, &b);

	switch(op)
	{
	case '+':
	{
		result = a+b;
	}
	break;

	case '-':
	{
		result = a-b;
	}
	break;

	case '*':
	{
		result = a*b;
	}
	break;

	case '/':
	{
		result = a/b;
	}
	break;

	default:
	{
		result = 0;
	}
	break;
	}

	printf("%f %c %f = %f", a, op, b, result);

	return 0;
}
