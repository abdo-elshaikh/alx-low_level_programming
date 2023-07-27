#include "lists.h"
/**
 * add_node_end - function
 * @head: head array
 * @str: string add
 * Return: pointer
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *current = *head;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = strlen(new->str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (current->next != NULL)
		current = current->next;
	current->next = new;
	return (new);
}
