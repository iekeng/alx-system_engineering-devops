#include "lists.h"

/**free_listint_t - frees a listint_t
  *
  *@head: pointer to head.
  */

void free_listint(listint_t *head)
{
	lisint_t *temp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = temp;
	}
}

