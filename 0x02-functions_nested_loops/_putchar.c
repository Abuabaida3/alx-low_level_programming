#include <unistd.h>

/** -putchar - writes the character c to stdout
 * @c: the character to print
 *
 * Return: on success 1.
 * on error, -1 is returned, and error is set appropriately
 */
in _putchar(char c)
{
	erturn(write(1, &c, 1));
}
