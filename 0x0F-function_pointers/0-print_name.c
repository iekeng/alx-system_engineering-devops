#include "function_pointers.h"

/**
  *print_name - prints a name
  *
  *@name - name to be printed
  *@f - pointer to a funtion
  *
  *Return: nothing
  *
  **/

void print_name(char *name, void (*f)(char *))
{
	while (1)
	{
		_putchar (*name++);
	}
}
