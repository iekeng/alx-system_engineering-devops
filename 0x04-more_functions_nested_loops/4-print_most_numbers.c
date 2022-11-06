#include "main.h"
/**
  *print_most_numbers - print 0 - 9, exclude 2 and 4
  *@digit: digits to be displayed
  *Return: 0
  */
void print_most_numbers(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		if (digit == 2 || digit == 4)
			continue;
		_putchar(digit + 48);
		digit++;
	}
	_putchar('\n');

	return (0);
}
