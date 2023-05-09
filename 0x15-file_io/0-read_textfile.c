#include "main.h"

/**
 * read_textfile - prints it to the POSIX standard output
 * @filename: Nmae of file
 * @letters: Number of letters to be read and printed
 * Return: returns the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char buff[1024];
	ssize_t t_bytes = 0;
	ssize_t r_bytes = 0;

	if (filename == NULL)
	{
		return (0);
	}
	int fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}
	while ((t_bytes < letters) && (r_bytes = read(fd, buff, sizeof(buff))))
	{
		if (r_bytes == -1)
		{
			close(fd);
			return (0);
		}
		ssize_t w_bytes = write(STDOUT_FILENO, buff, r_bytes);

		if (w_bytes == -1 || w_bytes != r_bytes)
		{
			close(fd);
			return (0);
		}
		t_bytes += r_bytes;
		if (t_bytes >= letters)
		{
			break;
		}
	}
	close(fd);
	return (r_bytes);
}
