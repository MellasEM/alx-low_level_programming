#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - unction that returns the number of elements
 * in a linked list_t list.
 * @h: pointer
 * Return: number od elements
 */

size_t list_len(const list_t *h)
{
size_t elemnts_number = 0;

while (h)
{
h = h->next;
elemnts_number++;
}
 return (elemnts_number);
}
