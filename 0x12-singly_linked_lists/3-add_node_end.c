#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - a function that adds a new node
 * at the end of a list_t list.
 * @head: Pointer to the pointer to the first node.
* @str: String to be duplicated and stored in the new node.
*
* Return: Address of the new element, or NULL if it failed.
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *node, *temp;

node = malloc(sizeof(list_t));
if (node == NULL)
return (NULL);

node->str = strdup(str);
if (node->str == NULL)
{
free(node);
return (NULL);
}

node->len = strlen(str);
node->next = NULL;

if (*head == NULL)
{
*head = node;
}
else
{
temp = *head;
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = node;
}

return (node);
}
