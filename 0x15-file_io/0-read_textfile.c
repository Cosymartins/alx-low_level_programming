#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- reads a tet file and prints it to stdout
 * @filename: the text file that's being read.
 * @letters: no. of letters to be read
 * Return:w- the no. of bytes read and printed
 * 0 when the functn fails or the filename is NULL
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
