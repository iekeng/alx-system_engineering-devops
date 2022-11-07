#include <stdlib.h>
#include <stdio.h>

/**
  *main - a program that prints all arguments it recieves
  *
  *@argc: holds number of arguments passed
  *@argv: holds the arguments passed
  *
  *Return: always 0 (success)
  */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s \n", argv[i]);

	return (0);
}

