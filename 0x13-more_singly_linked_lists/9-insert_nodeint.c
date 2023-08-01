#include "lists.h"
/**
 * insert_nodeint_at_index - function
 * @head: pointer
 * @idx: intager
 * @n: intager
 * Return: listint_t
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *prv = NULL;
	unsigned int i;

	if (!head)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	prv = *head;
	for (i = 0; prv != NULL && i < (idx - 1); i++)
	{
		prv = prv->next;
	}

	if (prv == NULL)
	{
		free(new);
		return (NULL);
	}

	new->next = prv->next;
	prv->next = new;

	return (new);
}
