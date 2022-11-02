#include "main.h"
/**
  *_puts_recursion - works like puts()
  *@s: input parameter
  *Return: nothing
  */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}

