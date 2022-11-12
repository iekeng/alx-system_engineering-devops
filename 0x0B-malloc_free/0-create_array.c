#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  *create_array - creates an array of characters
  *
  *@size: size of array
  *@c: variable to initialize array
  *
  *Return: @a
  **/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *z;

	if (size == 0)
		return (NULL);

	z = malloc(size * sizeof(char));

	if (z == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		z[i] = c;

	return (z);
}

