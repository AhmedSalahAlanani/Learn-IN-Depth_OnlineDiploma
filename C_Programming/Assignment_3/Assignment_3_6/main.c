/*
 * main.c
 *
 *  Created on: Aug 3, 2021
 *      Author: Ahmed Salah
 */


#include <stdio.h>

int main(void)
{
	char ch[100], letter, U_L;

	printf("Enter a string: ");
	fflush(stdin);	fflush(stdout);
	gets(ch);

	printf("Enter a character to find frequency: ");
	fflush(stdin);	fflush(stdout);
	scanf("%c", &letter);

	if((letter >= 'A') && (letter <= 'Z'))
	{
		U_L = 0;
	}
	else if((letter >= 'a') && (letter <= 'z'))
	{
		U_L = 1;
		letter -= 'a' - 'A';
	}
	else
	{
		U_L = -1;
		printf("Invalid! ");
	}

	if(U_L > -1)
	{
		int i, freq;
		for(i=0, freq=0; i<sizeof(ch)/sizeof(char); i++)
		{
			if((ch[i] == letter) || (ch[i] == letter+('a'-'A')))
			{
				freq++;
			}
			else
			{

			}
		}

		printf("Frequency of %c = %d", (U_L==0)?letter:letter+('a'-'A'),freq);
	}
	else
	{

	}

	return 0;
}


