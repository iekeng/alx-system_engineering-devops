#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  *listint_len - Returns the number of elements in listint_t
  *
  *@h: A pointer to the head
  *
  *Return: The number of elements in listint_t
  *******************************************************/

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h->n)
	{
		count++;
		h = h->next;
	}

	return (count);
}

