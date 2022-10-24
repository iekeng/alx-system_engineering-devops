#include <stdio.h>
/**
  *strlen - returns string length
  *@s - function parameter
  *Rrturn: length of string
  */
int _strlen(char *s)
{
	int num = 0;

	while(*s != '\0')
	{
		num++;
		++*s;
	}
	return(num);
}

