#include "main.h"

/**
 * read_textfile - prints it to the POSIX standard output
 * @filename: Nmae of file
 * @letters: Number of letters to be read and printed
 * Return: returns the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	char *buff;
	ssize_t bytes_r;
	ssize_t bytes_w;

	if (filename == NULL)
	{
		return (0);
	}
	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		return (0);
	}
	buff = (char *) malloc(sizeof(char) * (letters + 1));
	if (buff == NULL)
	{
		close(file);
		return (0);
	}
	bytes_r = read(file, buff, letters);
	if (bytes_r == -1)
	{
		close(file);
		free(buff);
		return (0);
	}
	buff[bytes_r] = '\0';
	bytes_w = write(STDOUT_FILENO, buff, bytes_r);
	if (bytes_w == -1 || bytes_w != bytes_r)
	{
		close(file);
		free(buff);
		return (0);
	}
	close(file);
	free(buff);
	return (bytes_r);
}
