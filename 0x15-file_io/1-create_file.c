#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_file - This function will create a file
 * @filename: This is the filename to be used.
 * @text_content: The content to be in the file.
 *
 * Return: 1 for success -1 for failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fdocument;
	int size_letters;
	int rwr;

	if (!filename)
	{
		return (-1);
	}
	fdocument = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fdocument == -1)
	{
		return (-1);
	}
	if (!text_content)
	{
		text_content = "";
	}
	for (size_letters = 0; text_content[size_letters]; size_letters++)
		;

	rwr = write(fdocument, text_content, size_letters);

	if (rwr == -1)
	{
		return (-1);
	}
	close(fdocument);
	return (1);
}
