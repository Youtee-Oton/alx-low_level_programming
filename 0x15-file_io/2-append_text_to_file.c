#include <stdio.h>
#include "main.h"
/**
 * append_text_to_file - appends a text at the end of a file.
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		return (1);
	}

	FILE *f = fopen(filename, "a");

	if (f == NULL)
	{
		return (-1);
	}

	fputs(text_content, f);

	fclose(f);

	return (1);
}
