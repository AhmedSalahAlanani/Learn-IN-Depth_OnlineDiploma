/*
 * main.c
 *
 *  Created on: Aug 9, 2021
 *      Author: Ahmed Salah
 */


#include <stdio.h>
#include <string.h>

void rev_words(char *str);

int main(void)
{
	char str[100];

	while(1)
	{
		printf("\r\nPlease insert a string: ");
		fflush(stdin); fflush(stdout);
		gets(str);

		printf("You Entered: %s\r\n", str);
		rev_words(str);
		printf("The reversed string: %s", str);
	}

	return 0;
}


void rev_words(char *str)
{
	int i,space_index, limit;

	for(i=0; str[i]; i++)
	{
		if(str[i] == ' ')
		{
			space_index = i;
			break;
		}
	}

	if(str[i] != 0)
	{
		limit = strlen(str)%2? (strlen(str) + 1)/2: strlen(str)/2;

		if(limit > space_index)
		{
			for(i=0; i<space_index; i++)
			{
				str[i] ^= str[i+space_index+1];
				str[i+space_index+1] ^= str[i];
				str[i] ^= str[i+space_index+1];
			}

			for( ; i<limit ; i++)
			{
				int j;
				for(j = space_index + i +1; j>i && j<strlen(str); j--)
				{
					str[j] ^= str[j-1];
					str[j-1] ^= str[j];
					str[j] ^= str[j-1];
				}
			}
		}
		else
		{
			for(i=0; str[i+space_index+1]; i++)
			{
				str[i] ^= str[i+space_index+1];
				str[i+space_index+1] ^= str[i];
				str[i] ^= str[i+space_index+1];
			}

			for( ; i<space_index; i++)
			{
				int j;
				for(j = strlen(str) - space_index -1; str[j+1]; j++)
				{
					str[j] ^= str[j+1];
					str[j+1] ^= str[j];
					str[j] ^= str[j+1];
				}
			}

		}
	}
	else
	{

	}
}
