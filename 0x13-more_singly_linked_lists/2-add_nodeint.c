#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning
 * @head: A pointer to a pointer
 * @n: Integer to be added to new node
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		return (NULL);
	}

	node->n = n;
	node->next = *head;
	*head = node;

	return (node);
}