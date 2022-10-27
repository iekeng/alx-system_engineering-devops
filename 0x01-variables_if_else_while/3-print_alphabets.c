#include <stdio.h>
#include <stdlib.h>
/**
  *main - prints out the alpabet
  *
  *Return: 0 always
  */
int main(void)
{
	char alph = 'a';
	char ALPH = 'A';

	while (alph <= 'z')
	{
		putchar(alph);
		alph++;
	}
	while (ALPH <= 'Z')
	{
		putchar(ALPH);
		ALPH++;
	}
	putchar('\n');

	return (0);
}

