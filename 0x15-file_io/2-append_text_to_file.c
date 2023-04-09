#include <stdio.h>
#include "main.h"

/**
 * append_test_to_file - append text
 * @filenam: file name
 * @text_content: string to be added
 * Return: 1 on success and -1 on fail
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		if (write(fd, text_content, _strlen(text_content)) == -1)
			return (-1)
	}

	close(fd);
	return (1);
}

/**
 * _strlen - string length to return
 * @s: string to count
 * Return: string length
 */

int _strlen(char*s)
{
	int c = 0;

	while (s[c])
		c++;

	return (c);
}
