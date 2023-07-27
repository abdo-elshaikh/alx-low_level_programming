#include "lists.h"
/**
 * lists_len - function
 * @h: arry 
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
