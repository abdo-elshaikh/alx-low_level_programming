#include "lists.h"
/**
 * add_nodeint_end - function
 * @head: pointer of node
 * @n: intager
 * Return: node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *current = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (current)
	{
		while (current->next)
			current = current->next;
		current->next = new;
	}
	else
	{
		*head = new;
	}

	return (new);
}
