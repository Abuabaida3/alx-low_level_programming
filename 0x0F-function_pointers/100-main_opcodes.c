#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
* main - printes a name as is
* @argc: name of the person
* @argv: arguments vector,
*
* Return: nothing.
*/
int main(int argc, char *argv[])
{
if (argc != 2)
{
printf("Error\n");
exit(1);
}
if (atoi(argv[1]) < 0)
{
printf("Error\n");
exit(2);
}
return (0);
}