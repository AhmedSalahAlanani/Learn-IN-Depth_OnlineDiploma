/*
 * main.c
 *
 *  Created on: Aug 8, 2021
 *      Author: Ahmed Salah
 */


#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[10];
	unsigned int num = 0;

	printf("Input ASCII number: ");
	fflush(stdin);	fflush(stdout);
	scanf("%s", str);


	int i;
	for(i=0; i<strlen(str); i++)
	{
		num *= 10;
		num += str[i] - 0x30;
	}


	printf("You entered = %u\r\n", num);

	return 0;
}
