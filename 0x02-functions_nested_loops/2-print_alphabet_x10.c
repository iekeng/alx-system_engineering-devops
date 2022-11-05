#include "main.h"
/**
  *print_alphabet_x10 - print the alphabet 10 times
  *
  *Return: 0
  */
void print_alphabet_x10(void)
{
	int times, letter;

	for (times = 0; times <= 10; times++)
	{
		for (letter = 97; letter <= 122; letter++)
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
	}

	return (0);
}
