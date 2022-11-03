#include "main.h"
/**
  *_pow_recursion -returns the power of a number (@x)
  *@x: first input parameter
  *@y: second input parameter
  *Return: @res
  */
int _pow_recursion(int x, int y)
{

	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else
		x = x * _pow_recursion(x, y - 1);

	return (x);
}

