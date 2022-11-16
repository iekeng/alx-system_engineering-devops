#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  *findChange - gets lowest number of cents needed
  *
  *@n: input from main
  *
  *Return: b
  *
  */

int findChange(int n)
{
	int i, len, a, b;
	int coinVal[] = {25, 10, 5, 2, 1};

	len = sizeof(coinVal) / sizeof(int);

	for (i = 0; i < len; i++)
	{
		if (n == coinVal[i])
			b = 1;

		else if (n > coinVal[i] && n % coinVal[i] == 0)
			b = n / coinVal[i];

		else if (n > coinVal[i] && n % coinVal[i] != 0)
		{
			a = n / coinVal[i];
			b = a + findChange((n % coinVal[i]));
		}
		else
			i++;
	}
	printf("%d\n", b);

	return (b);
}

/**
  *main - entry point
  *
  *@argc: argument counter
  *@argv: argument vector
  *
  *Return: 0 Always
  **/

int main(int argc, char *argv[])
{
	int change = atoi(argv[2]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (change < 0)
		printf("0\n");

	else
		findChange(change);

	return (0);
}

