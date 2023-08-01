#include "lists.h"
/**
 * pop_listint- function
 * @head: pointer
 * Return: intager
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int n;

	if (head)
	{
		current = *head;
		n = current->n;
		*head = current->next;
		free(current);
	}
	else
		return (0);
	return (n);
}
