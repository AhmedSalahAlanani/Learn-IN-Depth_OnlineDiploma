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
	char word[5];

	printf("Enter a character: ");
	fflush(stdin);		fflush(stdout);
	scanf("%c", &ch);

	if(((ch >= 'A')&&(ch <= 'Z')) || ((ch >= 'a')&&(ch <= 'z')))
	{
		word[0] = 0;
	}
	else
	{
		 strncpy(word, " not", 5);
	}


	printf("%c is%s an alphabet", ch, word);

	return 0;
}


