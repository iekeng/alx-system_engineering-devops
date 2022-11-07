#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
  *main - multiply two numbers
  *
  *
  *@argc: argument counter
  *@argv: argument vector
  *
  *
  *Return: 0 if successful
  */


int main(int argc, char *argv[])
{
	int res;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	res = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", res);

	return (0);
}
