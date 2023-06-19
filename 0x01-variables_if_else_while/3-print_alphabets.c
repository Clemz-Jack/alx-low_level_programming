#include <stdio.h>
/**
*main - prints the alphabet
*
*Return: Always 0 (success)
*/
int main(void)
{
	char alp[62] ="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"; 
	int i;

	for (i = 0; i < 62; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
