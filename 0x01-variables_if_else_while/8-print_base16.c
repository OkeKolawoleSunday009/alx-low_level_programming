#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int c;

	for (c = 48; c <= 58; c++)
	{
		putchar(c);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
return (0);
}
