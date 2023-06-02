#include <stdlib.h>
#include "lists.h"
/**
 * list_len - returns linked lists elements
 *@h: points to list_t
 * Return: elements in h
 */
size_t list_len(const list_t *h)
{
size_t  x = 0;
while (h)
{
x++;
h = h->next;
}
return (x);
}
