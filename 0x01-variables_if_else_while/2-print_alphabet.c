#include <stdio.h>
#include <stdlib.h>
/**
  *main - entry to program
  *
  *Return: 0
  */
int main()
{
	char alph='a';

	while(alph <= 'z')
	{
		putchar(alph);
		alph++;
	}
	putchar('\n');

	return (0);
}

