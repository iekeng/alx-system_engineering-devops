#include "main.h"
/**
  *_strlen - returns string length
  *@s: function parameter
  *Return: length of string
  */
int _strlen(char *s)
{
	int num;

	for (num = 0; *s != '\0'; *s)
		num++;

	return (num);
}

