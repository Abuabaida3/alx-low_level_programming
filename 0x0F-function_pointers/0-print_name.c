#include "function_pointers.h"
/**
* print_name - prints a name
* @name: input string
* @f: function casted to char pointer
*/
void print_name(char *name, void (*f)(char *))
{
(*f)(name);
}

