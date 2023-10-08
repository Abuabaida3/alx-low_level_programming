#include <stdio.h>

/**
 * main - prints all singie digit numbers bas 10 starting from 0;
 * followed by new line, using putchar
 * Rturn: Always 0 (success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n);
	}
	putchar('\n');
		return (0);
}
