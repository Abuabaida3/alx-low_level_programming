#include <stdio.h>

/**
 * main - Entery point
 *
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z' ; c++)
	{
		putchar(c);
	}

	for (c = 'A'; C <= 'Z'; C++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
