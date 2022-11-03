#include "main.h"

int find_sqrt(int num, int root);
/**
  *find_sqrt - finds natural sqare root of a number
  *@num: the number to find square root of
  *@root: root to be tested
  *Return: square root
  */
int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if (root == num / 2)
		return (-1);

	return (find_sqrt(num, root + 1));
}
/**
  *_sqrt_recursion - returns natural square root of param
  *@n: the number to return the square root of
  *Return: natural square root else return -1
  */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (find_sqrt(n, root));
}

