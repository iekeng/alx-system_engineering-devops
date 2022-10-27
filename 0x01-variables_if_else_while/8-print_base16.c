#include <stdio.h>
#include <stdlib.h>
/**
  *main - prints all single hex values.
  *
  *Return: 0 always.
  */
int main(void)
{
	int num = 0;
	char alph = 'a';

	while (num <= 9)
	{
		printf("%d", num);
		num++;
	}
	while (alph <= 'f')
	{
		putchar(alph);
		alph++;
	}
	putchar('\n');

	return (0);
}

