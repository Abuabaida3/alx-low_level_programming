#include "main.h"

/**
* print_diagonal - draws a digonal line on the terminal
* @n: number of timmes the character \ shuold be printed
*/
void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int i, j;

for (i = 0; i < n; i++)
{
for (j = 0; j < n; j++}
{
if (j == i)
_puchar('\\,);
else (j < i)
_putchar(' ');

}
_putchar('\n');
}

}
}
