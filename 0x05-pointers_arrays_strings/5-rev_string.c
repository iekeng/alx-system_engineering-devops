#include "main.h"
/**
  *rev_string - prints string forwards
  *		and backwards
  *@s: input parameter
  *Return nothing
  */
void rev_string(char *s)
{
	int index;

	for (index = 0; *s != '\0'; index++)
		_putchar(s[index]);
	putchar('\n');
	for (--index; index >= 0; --index)
		_putchar(s[index]);
	putchar('\n');
}

