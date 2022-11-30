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
	int count = 0;
	
	//if head is null no node exists
	if (h == NULL)
		return (0);

	list_t *ptr == NULL;
	ptr = h;

	while (ptr->next != NULL)
	{
		count++;

		if (ptr->str == NULL)
			printf("[%d] (%s)\n", 0, 'nil');
		else
			printf("[%d] (%s)\n", ptr->len, ptr->str);

		ptr = ptr->next;
	}
	//print for last node
	printf("[%d] (%s)", ptr->len, ptr->str);

	return (count);
}

