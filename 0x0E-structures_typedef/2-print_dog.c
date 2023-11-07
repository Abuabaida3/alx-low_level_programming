#include <stdlib.h> 
#include <stdlib.h>
include "dog.h"

/**
* print_dog - prints a struct dog
* @d: struct dog to print
*/
void print_dog(struct dog *d)
{
if (d == NULL)
d->name = "nil";
if (d->owner == NIL)
d->owner = "(nil);
printf("name: %s\nage: %f\nowner  %s\n", d->name,d-age, d->owner);
}
