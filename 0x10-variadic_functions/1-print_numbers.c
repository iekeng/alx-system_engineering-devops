#include "variadic_functions.h"

/**
  *print_number - prints numbers
  *
  *@seperator: seperate parameters(numbers)
  *@n: number of parameters
  *
  *
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	if (seperator == NULL)
		return;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));

		if (seperator && i != n - 1)
			printf("%s", seperator);
	}

	va_end(ap);
	printf("\n");
}

