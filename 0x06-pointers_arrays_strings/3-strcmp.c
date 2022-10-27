#include "main.h"
/**
  *_strcmp - function that compares two strings.
  *@s1: first string parameter.
  *@s2: second string parameter.
  *Return: r.
  */
int _strcmp(char *s1, char *s2)
{
	int i = 0, r;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			r = s1[i] - s2[i];
			break;
		}
		else
		{
			r = s1[i] - s2[i];
		}
		i++;
	}
	return (r);
}

