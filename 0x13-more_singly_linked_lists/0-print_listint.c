#include <stdio.h>
#include "lists.h"

/**
  *print_listint - prints the number of nodes
  *@h: is a pointer to structure
  *Return: i
  */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != 0)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
