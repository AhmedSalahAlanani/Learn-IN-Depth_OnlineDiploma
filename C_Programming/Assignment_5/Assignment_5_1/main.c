/*
 * main.c
 *
 *  Created on: Aug 17, 2021
 *      Author: Ahmed Salah
 */


#include <stdio.h>

struct Sstudent
{
	char name[100];
	int roll;
	float mark;
};

int main (void)
{
	struct Sstudent student_1;

	printf("Enter information of students: \r\n");

	printf("Enter name: ");
	fflush(stdin);	fflush(stdout);
	scanf("%s",student_1.name);

	printf("Enter roll number: ");
	fflush(stdin);	fflush(stdout);
	scanf("%d",&student_1.roll);

	printf("Enter marks: ");
	fflush(stdin);	fflush(stdout);
	scanf("%f",&student_1.mark);

	printf("Displaying Information: \r\n");
	printf("Name: %s\r\n",student_1.name);
	printf("Name: %d\r\n",student_1.roll);
	printf("Name: %f\r\n",student_1.mark);


	return 0;
}
