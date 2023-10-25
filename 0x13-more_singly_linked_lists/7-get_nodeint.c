#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a listint_t
 * @head: pointer
 * @index: the index of the node, starting at 0
 * Return: the nth node of a listint_t linked list, NULL if node does't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;

	n = 0;

	while (head != NULL)
	{
		if (n == index)
			return (head);

		head = head->next;
		n++;
	}

	return (NULL);
}
