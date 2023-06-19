#include <stdio.h>
/**
*main - print all  possible different combination of one digit 
*
*Return: Always 0 (success)
*/
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57);
		{
			putchar(' ');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
