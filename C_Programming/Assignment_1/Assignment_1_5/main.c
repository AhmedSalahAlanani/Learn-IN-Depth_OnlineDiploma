/*
 * main.c
 *
 *  Created on: Aug 1, 2021
 *      Author: Ahmed Salah
 */
#include <stdio.h>

int main(void)
{
	char ch;
	printf("Enter a character: ");
	fflush(stdin);		fflush(stdout);
	scanf("%c", &ch);
	printf("ASCII value of %c =  %d", ch,ch);

	return 0;
}
