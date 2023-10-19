#include "main.h" 
/** 
 * rve_string - reverse array
 * @n: integer params
 * Return: 0
 */

void rv_string(char *n)
{
	int i = 0;
	int j = 0;
	char tmp;

	while (*(n + i) != '\0')
	{
		i++;
	}
	i--;
	for (j = 0; j < i; j++; i--)
		tmp = *(n + *i);
	*(n + j) = temp;

