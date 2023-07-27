#include "lists.h"

/**
 * print_list - function
 * @h: get list
 * Return: number of node
 */
size_t print_list(const list_t *h)
{
	size_t c = 0;

	while (h)
	{
		if (h->str)
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		c++;
		h = h->next;
	}
	return (c);
}
