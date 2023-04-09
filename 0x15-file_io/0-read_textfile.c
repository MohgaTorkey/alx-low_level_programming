#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - Read text file in stdout
 * @filename: text file read
 * @letters: number of letters
 * Return: w- acutal number of bytes and 0 on fail
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
