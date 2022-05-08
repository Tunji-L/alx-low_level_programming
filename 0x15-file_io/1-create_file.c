#include "main.h"
#include <fcntl.h>
#include <unistd.h>
/**
 * create_file - function that creates a file
 * @filename: file name to be created
 * @text_content: content of the file
 * Return: 1 for success, -1 for failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, r, n;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (n = 0; text_content[n] != '\0'; n++)
		;

	r = write(fd, text_content, n);
	if (r == -1)
		return (-1);
	close(fd);

	return (1);
}
