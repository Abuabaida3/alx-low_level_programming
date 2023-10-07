#include <stdio.h>
/**
 * main - main blok
 * Discription: use putchar function to print the alphabet in lowercase
 * Return: 0
 * */
int main(void)
{
	char c = 'a';
	while(c <= 'z')
	{
		putchar(c);
		c++
	}
	putchar('\n');
	return (0);
}
