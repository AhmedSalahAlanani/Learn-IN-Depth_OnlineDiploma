/*
 * main.c
 *
 *  Created on: Aug 8, 2021
 *      Author: Ahmed Salah
 */


/*
 * main.c
 *
 *  Created on: Aug 8, 2021
 *      Author: Ahmed Salah
 */


#include <stdio.h>

int check(unsigned int num)
{
	int state;

	while(num > 1)
	{
		if(num % 3)
		{
			state = 1;
			break;
		}
		else
		{
			state = 0;
			num /= 3;
		}
	}


	return state;
}

int main(void)
{
	unsigned int num;

	printf("Input the number: ");
	fflush(stdin);	fflush(stdout);
	scanf("%u", &num);

	printf("You Entered = %u\r\n", num);

	printf("This means : %d\r\n", check(num));

	return 0;
}
