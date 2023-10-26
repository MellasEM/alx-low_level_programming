#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node
 * @head: Pointer 
 * @idx: The index
 * @n: The daata
 * Return: the address of the new node, or NULL if it failed
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *c;
	unsigned int i;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}

	c = *head;
	for (i = 0; c != NULL && i < idx - 1; i++)
	{
		c = c->next;
	}

	 if (c == NULL)
	 {
		 free(node);
		 return (NULL);
	 }

	 node->next = c->next;
	 c->next = node;

	 return (node);
}
