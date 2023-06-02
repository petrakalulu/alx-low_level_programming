#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints linked lists elements
 * @h: points to the lists to be printed
 *
 * Return: nodes printed
 */
size_t print_list(const list_t *h)
{
size_t c = 0;
while (h)
{
if (!h->str)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);
h = h->next;
c++;
}

return (c);
}

