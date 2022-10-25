#include "main.h"
/**
  *rev_string - prints string forwards
  *		and backwards
  *@s: input parameter
  *Return nothing
  */
void rev_string(char *s)
{
	int index, d;
	char letter;

	for (index = 0; s[index] != '\0'; ++index)
		;

	for (d = 0; d < index / 2; ++d)
	{
		letter = s[d];
		s[d] = s[index - 1 - d];
		s[index - 1 - d] = letter;
}

