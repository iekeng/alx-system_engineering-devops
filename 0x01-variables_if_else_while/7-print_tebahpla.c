#include <stdio.h>
#include <stdlib.h>
/**
 *main - entry point to program
 *Description: prints the alphabet in reverse
 *Return: 0 always
 */
int main(void)
{
	char alph = 'z';

	while (alph >= 'a')
	{
		putchar(alph);
		alph--;
	}
	putchar('\n');

	return (0);
}

