#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, then in uppercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
int ch;
for (ch = 'a'; ch < 'z'; ch++)
putchar(ch);
putchar('\n');
return (0);
}
