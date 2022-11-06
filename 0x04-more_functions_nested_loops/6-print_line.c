#include "main.h"
/**
  *print_line - print a line
  *@count: counter
  *@n: input parameter
  *Return: nothing
  */

void print_line(int n)
{
	int count;

	if(n <= 0)
		_putchar('\n');
	else
	{
		for (count = 1; count <= n; count++)
			_putchar('_');
		putchar('\n');
	}
}

