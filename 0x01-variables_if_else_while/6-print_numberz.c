#include <stdio.h>
/**
  *main - entry point
  *
  *Description: count from 1 to 9
  *
  *Return: 0
  */
int main(void)
{
	int digits = 0;

	while (digits < 10)
	{
		putchar(digits + 48);
		digits++;
	}
	putchar('\n');

	return (0);
}
