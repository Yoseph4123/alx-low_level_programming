#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
  *add_nodeint - adds a node at the beginning
  *@head: is a pointer to a structure
  *@n: is an integer
  *Return: a node pointer
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
