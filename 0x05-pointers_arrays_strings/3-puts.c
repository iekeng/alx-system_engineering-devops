#include "main.h"
/**
  *_puts - prints string to stdout
  *@str: parameter passed to function
  *Return: nothing
  */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		++str;
	}
	_putchar('\n');
}

