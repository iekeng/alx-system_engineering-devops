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

	while(s[count] != '\0')
	{
		count++;
	}
	while(s[count] >= '\0')
	{
		_putchar(s[count]);
		count--;
	}
	_putchar('\n');
}	

