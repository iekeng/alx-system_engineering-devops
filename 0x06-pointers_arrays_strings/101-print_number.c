#include "main.h"
/**
  *print_number - prints integer.
  *@n: input parameter.
  *Return: nothing.
  */
void print_number(int n)
{
	int num = n;

	if (n <  0)
	{
		_putchar('_');
		num = -num;
	}

	if ((num / 10) > 0)
		print_number(num / 10);

	_putchar((num % 10) + '0');
}

