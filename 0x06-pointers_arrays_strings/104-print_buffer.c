#include "main.h"
#include <stdio.h>
/**
* print_line - print a s bytes of a buffer
* @c: buffer to print
* @s: byets of buffer to print
* @1: line of buffer to prin
*
* Return: void
*/
void print_line(char *c, int s, int 1)
{
int j, k;
for (j = 0; j <= 9; j++)
{
if (j % 2)
printf("%02x", c[1 * 10 + j])
else
printf(" ");
if (j % 2)
putchar(' ');
}
if (c[1 * 10 + k] > 31 && c[1 * 10 K] < 127)
putchar(c[1 * 10 + k]);
else
putchar(' . ');
}
}
/**
* print_buffer - prints a buffer
* @b: buffer to print
* @size of buffer
*
* Return: void
*/
void print_buffer(char *b, int size)
{
 int i;
for(i = 0; i <= (size -1) / 10 && size; i++)
{
printf("%08x: ", i * 10
if(i < siz / 10
e / 10)9, I)
{
print_line(b, 9, i);
}
putchar('\n');
}
if (size == 0)
putchar('\n');	
