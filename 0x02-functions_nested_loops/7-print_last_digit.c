#include "main.h"
/**
  *print_last_digit - find the last digit of a number
  *@n: input param
  *@lastDigit: last digit of input @n
  *Return: @lastDigit
  */
int print_last_digit(int n)
{
	int lastDigit;

	if (n < 0)
		lastDigit = -1 * (n % 0);
	else
		lastDigit = n % 10;

	return(lastDigit);
}
