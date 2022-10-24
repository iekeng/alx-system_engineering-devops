#include "main.h"
/**
  *print_rev - print a sentence in reverse
  *@count: determines the indices of @s
  *@s: input parameter
  *Return: nothing
  */
void print_rev(char *s)
{
	int count;

	for (index = 0; s[count] != '\0'; ++count);
	for (--count; count >= 0; --count)
		_putchar(s[count])
	_putchar('\n');
}	

