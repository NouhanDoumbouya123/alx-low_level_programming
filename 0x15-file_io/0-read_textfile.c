#include "main.h"


/**
 * read_textfile - function that prints a text to the stdout
 * @filename: the name of the file
 * @letters: the number of letters to be printed
 * Return: 0 if filename is NULL or the file cannot be opened
 * or if write fails
 */


ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	t = read(fd, buffer, letters);
	w = write(STDOUT_FILENO, buffer, t);

	free(buffer);
	close(fd);
	return (w);
}
