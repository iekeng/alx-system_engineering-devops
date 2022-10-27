#include <stdio.h>
#include <stdlib.h>
/**
  *main - entry into program
  *
  *Return: 0 always
  */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		printf("%d", num);
		num++;
	}
	putchar('\n');

	return (0);
}

