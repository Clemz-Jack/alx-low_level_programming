#include <stdio.h>
#include "main.h"

/**
* main - entry point
*
* Description: prints the numbers 1 - 100 W/
* Fizz for multiples of 3, BUZZ for multiples of 5,
* and FIZZBUZZ for multiples of both
*
* Return: always 0
*/
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FIZZBUZZ");
		else if (i % 3 == 0)
			printf("FIZZ");
		else if (i % 5 == 0)
			printf("BUZZ");
		else
			printf("%i", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
