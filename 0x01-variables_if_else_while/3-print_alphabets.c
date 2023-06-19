#include <stdio.h>
/**
*main - prints lowercase followed by uppercase alphabets
*
*Return: Always 0 (success)
*/
int main(void)
{
	char lowercase, uppercase;


	lowercase = 'a';
	uppercase = 'A';

	while (lowercase <= 'z')
	{

		putchar(lowercase);
		lowercase++;
	}
	while (uppercase <= 'Z')
	{
		putchar(uppercase);
		uppercase++;
	}

	putchar('\n');
	return (0);
}
