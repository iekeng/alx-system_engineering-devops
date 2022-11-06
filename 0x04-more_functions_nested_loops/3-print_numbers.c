#include "main.h"
/**
  *print_numbers - prints the numbers 0 to 9
  *@digit: represent digits
  *Return: 0 always
  */
void print_numbers(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		_putchar(digit + 48);
		digit++;
	}
	_putchar('\n');

	return (0);
}

