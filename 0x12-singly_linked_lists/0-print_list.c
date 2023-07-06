#include "lists.h"

/**
 * print_list - it prints all elements in a list
 * @h: first node
 * Return: numbers of nodes
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		i++;
	}
	return (i);
}
