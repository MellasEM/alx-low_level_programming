#include <stdlib.h>
#include "lists.h"

/**
 * free_list - a function that frees a list_t list.
 * @head: Pointer to the first node of the list.
 * Return: None
 */

void free_list(list_t *head)
{
list_t *temp;

while (head != NULL)
{
temp = head;
head = head->next;
free(temp->str);
free(temp);
}
}
