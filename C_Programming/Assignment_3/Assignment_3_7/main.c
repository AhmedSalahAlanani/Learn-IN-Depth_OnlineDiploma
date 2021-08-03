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

	printf("Enter a string: ");
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

	printf("Length of string = %d", length);



	return 0;
}


