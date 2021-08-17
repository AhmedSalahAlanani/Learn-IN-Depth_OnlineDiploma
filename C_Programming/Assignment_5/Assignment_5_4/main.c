/*
 * main.c
 *
 *  Created on: Aug 18, 2021
 *      Author: Ahmed Salah
 */


#include <stdio.h>

struct Sstudent
{
	char name[10];
	float mark;
};



int main (void)
{
	struct Sstudent students[10];

	printf("Enter information of students: \r\n");

	int i;
	for(i=0; i< sizeof(students)/sizeof(struct Sstudent); i++)
	{
		printf("For roll number %d",i);

		printf("\r\nEnter name: ");
		fflush(stdin); fflush(stdout);
		scanf("%s", students[i].name);

		printf("\r\nEnter marks: ");
		fflush(stdin); fflush(stdout);
		scanf("%f", &students[i].mark);
	}

	printf("Displaying information of students: \r\n");

	for(i=0; i< sizeof(students)/sizeof(struct Sstudent); i++)
	{
		printf("Information for roll number %d\r\n",i);

		printf("Name: %s\r\n",students[i].name);
		printf("Marks: %f\r\n",students[i].mark);
	}

	return 0;
}
