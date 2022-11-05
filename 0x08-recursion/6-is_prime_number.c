#include "main.h"
/**
  *
  *
  *
  */
int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);
	if (div == num / 2)
		return (1);

	return (is_divisible(num, div + 1));
}
/**
  *is_prime_number - cecks if anumber is prime
  *@n: the number to be checked
  *
  *
  */
int is_prime_number(int n))
{
	int div = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);

	return (is_divisible(n, div));
}
