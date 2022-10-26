#include "main.h"
/**
  *_strcat - function that concatenates two strings.
  *@dest: first input parameter.
  *@src: second input parameter.
  *Return: @dest.
  */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	char str[];

	while (*dest !='\0')
	{
		str[i++] = dest[j++];
		i++;
		j++;
	}
	j = 0;
	while (*src != '\0')
	{
		str[i] = src[j]
		i++;
		j++;
	}
	str[i] = '\0';
	dest[] = str[];

	return(dest);
}

