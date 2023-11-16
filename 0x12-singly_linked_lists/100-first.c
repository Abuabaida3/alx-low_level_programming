#include <stdio.h>

/**
 * berfore_main - print statement within this fxn before running main fxn.
 */
void __attribute__((constructor)) before_main(void)
{
	printf("you're beat!and yet you must allow,\n");
	printf("I broe my house upon my back!\n");
}
