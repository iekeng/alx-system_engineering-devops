#include "lists.h"

/**
  *print_list - prints all the elements of a list
  *
  *list_t - struct list_s
  *@h: pointer to struct
  *
  *Return: number of nodes (count)
  **/

size_t print_list(const list_t *h)
{
	size_t count = 0;

	/*if head is null no node exists*/
	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		count++;

		if (h->str == NULL)
			printf("[%d] %s\n", 0, (nil));
		else
			printf("[%d] (%s)\n", h->len, h->str);

		h = h->next;
	}
	/*print for last node*/
	printf("[%d] (%s)\n", h->len, h->str);

	return (count);
}

