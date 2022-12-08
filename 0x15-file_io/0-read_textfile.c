#include "main.h"

/**
  *read_textfile - a function that reads a text file and
  *		   prints to standard output.
  *
  *@filename: file to be read.
  *@letters: number of letters to read and print from file
  *
  *Return: 0 if it fails or actual number of letters it could
  *	   read and input
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t check, count;
	int fd;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		free(buff);
		return (0);
	}
	check = read(fd, buff, letters);
	if (check == -1)
		return (0);

	count = write(STDOUT_FILENO, buff, check);

	if (count == -1 || check != count)
		return (0);

	free(buffer);

	close(file);

	return (count);

}

