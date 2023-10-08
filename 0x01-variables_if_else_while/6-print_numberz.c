#include <stdio.h>

/**
 * main - prints all singie digit numbers  bas 10 starting from 0;
 * followed by new line using putchar
 * Rturn: Always 0 (success)
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n+'0');
	}
	putchar('\n');
		return (0);
}
