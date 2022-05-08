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
	int fd;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY, 0600);
	if (fd < 0)
		return (-1);
	if (text_content)
		write(fd, text_content,(sizeof(text_content) - 2));

	return (1);
}
