#include "main.h"

/**
 * append_text_to_file - Append a text file
 *
 * @filename: the filename to append to the file path
 * @text_content: the text to append to the file path
 *
 * Return: the string to append to the file path
 */
int append_text_to_fil(const char *filename, char *text_content)
{
int o, w, len = 0;
if (filename == NULL)
	return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);
	if (o == -1 || w == -1)
		return (-1);
	close(o);
	return (1);
}
