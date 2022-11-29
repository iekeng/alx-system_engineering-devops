#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  *add_nodeint - adds a new node at the beginning of the
  *              listint_t list.
  *@head: a pointer to the address of the head
  *@n: data
  *
  *Return: If the function fails -NULL
  *        ELSE the address of the new node.
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;

	*head = newNode;

	return (newNode);
}

