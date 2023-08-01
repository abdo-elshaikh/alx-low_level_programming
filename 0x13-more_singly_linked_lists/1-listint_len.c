#include "lists.h"
/**
 * listint_len - function
 * @h: pointer list
 * Return: size_t
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h->next != NULL)
	{
		len++;
		h = h->next;
	}
	len++;
	return (len);
}
