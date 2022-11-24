#include "variadic_functions.h"

/**
  *sum_them_all - returns sum of all its parameters
  *
  *@n: number of parameters
  *
  *Return: @sum if @n is not 0
  */

int sum_them_all(const unsigned int n, ...)
{

	va_list ptr;

	if (n == 0)
		return (0);
	va_start(ptr, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ptr, int);

	va_end(ptr);

	return (sum);
}

