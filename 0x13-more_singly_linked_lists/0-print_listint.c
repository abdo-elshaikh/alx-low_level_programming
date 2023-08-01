#include "lists.h"
/**
 * print_listint - function
 * @h: pointer list
 * Return: size_t
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 1;

	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	printf("%d\n", h->n);
	return (i);
}
