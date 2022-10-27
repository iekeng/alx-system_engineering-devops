#include <stdio.h>
#include <stdlib.h>
/**
  *main - entry point to program
  *
  *Return: 0 always
  */
int main(void)
{
	int ch = 48;

	while (ch < 58)
	{
		putchar(ch);
		if (ch != 57)
		{
			putchar(',');
			puchar(' ');
		}
		ch++;
	}
	putchar('\n');

	return (0);
}

