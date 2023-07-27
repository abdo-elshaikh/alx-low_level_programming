#include "lists.h"
/**
 * free_list - function
 * @head: list free
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *current = head, *next;

	while (current)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}
