#include "main.h"
/**
  *_memset - writes string to memory
  *@s: starting address of memory to be filled
  *@b:value to be filled
  *@n: number of bytes to be filled
  *Return: @s
  */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

