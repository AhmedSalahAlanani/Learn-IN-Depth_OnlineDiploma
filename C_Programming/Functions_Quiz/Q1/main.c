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
	char input_username[20];
	char const USERNAME[] = "Admin";

	printf("Enter the username: ");
	fflush(stdin);	fflush(stdout);
	gets(input_username);

	int state;
	if(strlen(input_username) == strlen(USERNAME))
	{
		if(!strcmp(input_username,USERNAME))
		{
			state = 1;
		}
		else
		{
			state = 0;
		}
	}
	else
	{
		state = 0;
	}

	if(state == 1)
	{
		printf("The username you entered is Correct!");
	}
	else
	{
		printf("The username you entered is Incorrect!");
	}

	return 0;
}
