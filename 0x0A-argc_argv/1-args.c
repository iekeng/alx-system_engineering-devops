#include <stdio.h>
/**
  *main - entry point
  *@argc: argument counter
  *@argv: argument vector
  *Return: 0 always
  */
int main(int argc, char __attribute__((unused)) *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		continue;
	printf("%d \n", i);

	return (0);
}

