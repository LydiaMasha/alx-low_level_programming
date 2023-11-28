#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>

/**
 * append_text_to_file - APPENDS TEXT AT THE END OF A FILE
 * @filename: Name of the file
 * @text_content: added content to file
 *
 * Return: 1 if file exists and -1 if it doesn't
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_d;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);

	file_d = open(filename, O_WRONLY | O_APPEND);
	if (file_d == -1)
		return (-1);

	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;

		rwr = write(file_d, text_content, nletters);

		if (rwr == -1)
			return (-1);
	}

	close(file_d);

	return (1);
}



