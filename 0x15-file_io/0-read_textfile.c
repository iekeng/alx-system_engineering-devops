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
	int file, letCount;

	if (filename == NULL)
		return (0);

	buff = malloc((letters + 1) * sizeof(char));
	if (buff == NULL)
		return (0);

	buff[letters] = '\0';
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	letCount = read(file, buff, letters);
	write(STDOUT_FILENO, buff, letCount);
	close(file);
	free(buff);
	return (letCount);
}

