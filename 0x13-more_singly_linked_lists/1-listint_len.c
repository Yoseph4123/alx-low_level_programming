#include <stdio.h>
#include "lists.h"

/**
  *listint_len - return the number of nodes
  *@h: is pointer to structure
  *Return: i
  */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != 0)
	{
		h = h->next;
		i++;
	}
	return (i);
}
