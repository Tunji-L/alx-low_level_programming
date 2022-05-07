#include <fcntl.h>
#include <unistd.h>
#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - read file 
 * @filename: input file
 * @letters: number of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters) {
	char *buf;
	int fd;
	ssize_t r, w;

	if (!filename)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	r = read(fd, buf, letters);
	
	close(fd);
	
	w = write(STDOUT_FILENO, buf, r);

	free(buf);

	return (w);
}

