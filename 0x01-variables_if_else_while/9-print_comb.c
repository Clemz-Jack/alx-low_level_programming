#include <stdio.h>
/**
*main - print all single  digit
*
*Return: Always 0 (success)
*/
int main(void)
{
	int num;

	num = 0;


	while (num <= 9)
	{

		putchar(num + '0');
		if (num < 9)
		{

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
