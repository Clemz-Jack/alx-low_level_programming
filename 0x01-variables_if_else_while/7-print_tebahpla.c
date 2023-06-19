#include <stdio.h>
/**
*main - prints the lowercase alphabets in reverse
*Return: Always 0 (success)
*/
int main(void)
{
	char ch;

	ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
