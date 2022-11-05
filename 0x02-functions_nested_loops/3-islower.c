#include "main.h"
/**
  *_islower - checks for lowercase letters
  *@c: input parameter
  *Return: 1 if true, 0 if false
  */
int _islower(int c)
{
	if (c >= 97 || c <= 122)
		return (1);
	return (0);
}

