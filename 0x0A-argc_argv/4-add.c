#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
  *main - add arguments
  *
  *@argc: argument counter
  *@argv: argument vector
  *
  *Return: 0 if successful
  */

int main(int argc, char *argv[])
{
	int res, i;

	for (i = 1; i < argc; i++)
	{
		if (!isdigit(atoi(argv[i])))
		{
			printf("Error\n");
			return (1);
		}
		else if (!argv[i])
			printf("0\n");
		else
		{
			res = res + atoi(argv[i]);
			printf("%d\n", res);
			return (0);
		}
	}
}

