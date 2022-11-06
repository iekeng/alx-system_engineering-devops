#include <stdio.h>
/**
  *main - entry point
  *@argc: argument counter
  *@argv: argument vector
  *@i: nnumber of arguments
  *Return: 0 always
  */
int main(int argc, char __attribute__((unused)) *argv[])
{
	int i;

	for (i = 0; i < argc; i++);

	printf("%d \n", i);

	return (0);
}

