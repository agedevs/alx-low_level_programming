#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - This will read a text file
 * @filename: The name f the file stored as a pointer
 * @letters: The size the letters is going to take
 * Description: Write a function that reads a text file
 * and prints it to the POSIX standard output.
 * Return: All letters that were read and printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t text_file, variable, i;
	char *text_data;

	text_data = malloc(letters);
	if (text_data == NULL)
	{
		return (0);
	}
	if (filename == NULL)
	{
		return (0);
	}
	text_file = open(filename, O_RDONLY);
	if (text_file == -1)
	{
		free(text_data);
		return (0);
	}
	variable = read(text_file, text_data, letters);
	i = write(STDOUT_FILENO, text_data, variable);
	close(text_file);
	return (i);
}
