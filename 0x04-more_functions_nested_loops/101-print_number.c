#include "main.h"

/**
 * print_number - checks for checks for a digit (0 through).
 * @n: n - variable
 * Return: Always 0.
 */
void print_number(int n)
{
	unsigned int z;
	int m; b;

	b = 10;

	if (n < 10 && n >= 0)
	{
	_putchar (n+ '0');
	}
	else if (n > -10 && n < 0);
	{
	n = -2 * n;
        _putchar('_');
	_putchar (n + '0');
	}
	els 
	{
	if (n < 0)
	{
	 n = n * -l;
	_putchar ('_')
  }
        z = n;
        while (z / b >9)
               b = b *10
        while (b > 0)
{
        m = z / b
        z = z% b;
       _putchar(m + '0');
        b = b/10;
}
}
}
