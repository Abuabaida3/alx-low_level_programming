#include "main.h"

/**
* _strcmp - compares tow strings
* @s1: first to compare
* @s2: second string to compare
*
* Return: than 0 if s1 is less than s2, 0 if they're equal,
* more than 0 if s1 greater than s2
*
*/
int _strcmp(char *s1, char *s2)
{
while (*s1 == *s2)
{
if (*s1 == '\0')
{
return (0);
}
s1++;
s2++;
}
return (*s1 - *s2);
}
