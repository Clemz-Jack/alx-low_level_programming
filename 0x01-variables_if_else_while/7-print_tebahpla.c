#include <stdio.h>
/**
*main - print the lowercase alphabet in reverse,
*followed by a new line .
*Return: Always 0 (success)
*/
int main(void)
{
	char ch;

	for (ch = '2'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
