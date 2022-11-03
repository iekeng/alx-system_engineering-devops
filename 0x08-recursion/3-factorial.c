#include "main.h"
/**
  *factorial - finds the factorial of a number
  *@n: input parameter
  *Return: @n
  */
int factorial(int n)
{	
	int res = n;

	if (n < 1)
		return (-1);
	else if (n == 0)
		return (1);
	else
		res *= factorial(n-1);

		return (res);
}

