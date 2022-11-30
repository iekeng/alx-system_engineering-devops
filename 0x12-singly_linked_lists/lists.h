#ifndef LISTS_H
#define LISTS_H

/**
  *struct list_s - node structure
  *list_t - typedef of list_s
  *
  *@str: string pointer
  *@len: unsigned int data
  *@next: pointer to next node
  *
  */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t

#include <stdlib.h>
#include <stdio.h>
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
int _putchar(char *c);

#endif

