#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * append_text_to_file - This function appends text to file
 * @filename: The filename to be used
 * @text_content: The content of the text added.
 *
 * Return: 1 for file exists. -1 for no fails.
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fdocument;
	int size_letters;
	int rwr;

	if (!filename)
	{
		return (-1);
	}

	fdocument = open(filename, O_WRONLY | O_APPEND);

	if (fdocument == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		for (size_letters = 0; text_content[size_letters]; size_letters++)
			;

		rwr = write(fdocument, text_content, size_letters);

		if (rwr == -1)
			return (-1);
	}

	close(fdocument);
	return (1);
}
