#include "lists.h"
/**
 * free_listint - function
 * @head: pointer
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *next, *current;

	if (head != NULL)
	{
		current = head;
		next = current->next;
		while (next)
		{
			free(current);
			current = next;
			next = next->next;
		}
	}
	free(current);
}
