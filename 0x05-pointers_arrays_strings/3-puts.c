#include "main.h"
/**
  *_puts - prints string to stdout
  *@str: parameter passed to function
  *Return: nothing
  */
void _puts(char *str)
{
	int num;

	for (num = 0; *str != '\0'; ++str)
	{
		_putchar(*str + num);
		num++;
	}
	_putchar('\n');

}

