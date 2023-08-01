#include "lists.h"
/**
 * free_listint2 - function
 * @head: pointer list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *next;

	if (head)
	{
		current = *head;
		next = current->next;
		while (next)
		{
			free(current);
			current = next;
			next = next->next;
		}
	}
	else
		return;
	free(current);
	*head = NULL;
}
