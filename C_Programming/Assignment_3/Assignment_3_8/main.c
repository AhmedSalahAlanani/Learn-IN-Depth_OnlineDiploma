/*
 * main.c
 *
 *  Created on: Aug 3, 2021
 *      Author: Ahmed Salah
 */


#include <stdio.h>

int main(void)
{
	char ch[100];
	int length;

	printf("Enter the string: ");
	fflush(stdin);	fflush(stdout);
	gets(ch);


	int i;
	for(i=0; i<sizeof(ch)/sizeof(char); i++)
	{
		if(ch[i] == '\0')
		{
			length = i;
			break;
		}
		else
		{

		}
	}

	printf("Reverse string is: ");

	for(i=length-1; i>-1; i--)
	{
		printf("%c", ch[i]);
	}

	return 0;
}


