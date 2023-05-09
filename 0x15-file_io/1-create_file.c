#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: Name of file
 * @text_content:  is a NULL terminated string to write to the file
 * Return: returns 1 and if NULL returns -1
 */

int create_file(const char *filename, char *text_content)
{
	int file;
	ssize_t bytes_w;

	if (filename == NULL)
	{
		return (-1);
	}
	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
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
