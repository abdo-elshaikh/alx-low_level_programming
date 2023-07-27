#include "lists.h"
/**
 * list_len - function
 * @h: pointer for array
 * Return: len
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
