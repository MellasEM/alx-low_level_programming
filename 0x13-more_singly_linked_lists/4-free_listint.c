#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list.
 * @head: Poiner to head of the list
 * Return: none
 */

void free_listint(listint_t *head)
{
    listint_t *c;

    while (head != NULL)
    {
	    current = head;
	    head = head->next;
	    free(c);
    }
}
