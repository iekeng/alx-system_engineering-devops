#include "main.h"
/**
  *print_rev - print a sentence in reverse
  *@s: input parameter
  *Return: nothing
  */
void print_rev(char *s)
{
	int count;

	for (count = 0; s[count] != '\0'; ++count)
		;

	for (--count; count >= 0; --count)
		_putchar(s[count]);

	_putchar('\n');
}

