#include <stdio.h>
/**
  *swap_int - swap the values @a and @b
  *@a: first parameter
  *@b: second parameter
  *Return: nothing
  */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

