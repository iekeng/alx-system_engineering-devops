#include "main.h"
/**
  *string_toupper - converts strings to uppercase
  *@s: input parameter
  *Return: s
  */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 91 && s[i] <= 122)
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}

