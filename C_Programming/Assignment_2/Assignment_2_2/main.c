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
	char ch;
	char type[10];

	printf("Enter an alphabet: ");
	fflush(stdin);		fflush(stdout);
	scanf("%c", &ch);

	switch(ch)
	{
	case 'a':
	case 'A':
	case 'e':
	case 'E':
	case 'i':
	case 'I':
	case 'o':
	case 'O':
	case 'u':
	case 'U':
	{
		 strncpy(type, "Vowel", 6);
	}
	break;

	default:
	{
		 strncpy(type, "Consonant", 10);
	}
	break;
	}


	printf("%c is a %s", ch, type);

	return 0;
}
