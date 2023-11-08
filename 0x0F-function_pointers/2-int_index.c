#include <stdio.h>
#include "function_pointers.h"
/**
* int_index - searchs for an integer.
* @array: array to iterate.
* @size: array size.
* @cmp: comparte function.
* Return: return the index of an element found.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array && cmp)
for (i = 0; i < (int)size; i++)
if (cmp(array[i]))
return (i);
return (-1);
}
