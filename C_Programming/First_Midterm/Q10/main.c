/*
 * main.c
 *
 *  Created on: Aug 9, 2021
 *      Author: Ahmed Salah
 */


#include <stdio.h>
#include <string.h>

unsigned int count_ones(char *str);

int main(void)
{
	char str[100];

	while(1)
	{
		printf("\r\nPlease insert a string of numbers: ");
		fflush(stdin); fflush(stdout);
		gets(str);

		printf("You Entered: %s\r\n", str);

		printf("The maximum number of ones =  %u", count_ones(str));
	}

	return 0;
}

unsigned int count_ones(char *str)
{
	unsigned int count[10] = {0}, max = 0, index = 0;

	int i;
	for(i=0; str[i]; i++)
	{
		if(str[i] == '0')
		{
			/* I found the first zero*/
			if(str[i+1] == '1')
			{
				/* I found the first one*/
				do
				{
					count[index]++;
					i++;

				}while(str[i+1] == '1');

				index++;
			}
			else
			{

			}
		}
		else
		{

		}
	}

	for(i = 0; i< sizeof(count)/sizeof(unsigned int); i++)
	{
		if(count[i] > max)
		{
			max = count[i];
		}
		else
		{

		}
	}

	return max;
}


