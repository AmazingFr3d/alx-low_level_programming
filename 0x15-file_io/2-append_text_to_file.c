#include "main.h"

/**
 * append_text_to_file -  a function that appends text at the end of a file
 * @filename: Name of file
 * @text_content:  is a NULL terminated string to write to the file
 * Return: returns 1 and if NULL returns -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t bytes_w;

	if (filename == NULL)
	{
		return (-1);
	}
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		bytes_w = write(file, text_content, strlen(text_content));
		if (bytes_w == -1)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}
