#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - a function that adds a new node
 * at the beginning of a list_t list.
 * @head: double pointer
 * @str: string
 * Return: Agress of element, NULL (On Failure)
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *node;
unsigned int len = 0;

while (str[len])
len++;

node = malloc(sizeof(list_t));

if (!node)
return (NULL);

node->str = strdup(str);
node->len = len;
node->next = (*head);
(*head) = node;
return (*head);
}
