#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
  *main - adds positive numbers
  *
  *@argc: argument counter
  *@argv: argument vector
  *
  *Return: 0 if successful
  */

int main(int argc, char *argv[])
{
	int res, i;

	if (argc == 1)
	{
		printf("0 \n");
	}
	else
	{
		res = 0;
		for (i = 0; i < argc; i++)
		{
			if (isNum(argv[i] == 0)
			{
				res += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", res);
	}
	return (0);
}

/**
  *isNum - checks if the value passed from main is a number
  *
  *@num: input param
  *
  *Return: 1 if @num is not a number or 0 if it is
  */

int isNum(char num[])
{
	int i, len = strlen(num);

	for (i = 0; i < len; i++)
	{
		if (!isdigit(num[i]))
			return (1);
	}
	return (0);
}

