#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file an prints to th POSIX stdo
 * @filename:  name of file to read
 * @letters: number of letters it reads an prints
 *
 * Return: actual number of letters to reads an print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_d;
	ssize_t lenr, lenw;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}

	file_d = open(filename, O_RDONLY);

	if (file_d == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
	{
		close(file_d);
		return (0);
	}
	lenr = read(file_d, buffer, letters);
	close(file_d);
	if (lenr == -1)
	{
		free(buffer);
		return (0);
	}
	lenw = write(STDOUT_FILENO, buffer, lenr);
	free(buffer);
	if (lenr != lenw)
	{
		return (0);
	}

	return (lenw);
}
