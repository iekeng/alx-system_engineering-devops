#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *add_nodeint_end - adds a nnode to the end of listint_int
  *
  *@head: pointer to address of head
  *@n: data
  *
  *Return: if funtion fails - NULL
  *        ELSE the address of the new element
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *lastNode;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
		*head = newNode;

	else
	{
		last = *head;
		while (lastNode->next != NULL)
			lastNode = lastNode->next;
		lastNode->next = newNode;
	}

	return (*head);
}

