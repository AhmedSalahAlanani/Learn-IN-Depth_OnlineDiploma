/*
 * main.c
 *
 *  Created on: Aug 8, 2021
 *      Author: Ahmed Salah
 */

#include <stdio.h>
#include <string.h>

char* reverse_sentence (char *sentence, int start, int end);


int main(void)
{
	char sentence[20];

	printf("Enter a Sentence: ");
	fflush(stdin);	fflush(stdout);
	gets(sentence);

	printf("Reversed sentence:  %s\r\n", reverse_sentence(sentence,0,strlen(sentence)-1));

	return 0;
}

char* reverse_sentence (char *sentence, int start, int end)
{
	if(start == end)
	{
		return sentence;
	}
	else
	{
		int i, temp;
		for(i = end; i>start; i--)
		{
			temp = sentence[i-1];
			sentence[i-1] = sentence[i];
			sentence[i] = temp;
		}

		return reverse_sentence(sentence,start+1,end);
	}
}
