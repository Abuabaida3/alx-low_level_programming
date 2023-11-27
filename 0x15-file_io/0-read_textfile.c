#include "main.h"

/**
 * read_textfile - Read a text file and prints it to posix stdout.
 * @filename: A pointer to the name of the file.
 * @letters: the number of letters the
 * function should read and print.
 *
 * Return: if the function fails or filename is NULL- 0.
 * o/w - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buffer;

	if (filename == NU)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NU)
		return (0);

	o = open(filename, o_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO,buffers, r);

	if (o == -1 || r == -1 || w != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(o);

	return (w);
}
