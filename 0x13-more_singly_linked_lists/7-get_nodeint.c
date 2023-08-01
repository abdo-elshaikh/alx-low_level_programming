#include "lists.h"
/**
 * get_nodeint_at_index - function
 * @head: pointer
 * @index: intager
 * Return: listint_t
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i= 0;

	if (!head)
		return (NULL);
	for (i = 0; head->next != NULL; i++)
	{
		if (i == index)
			return (head);
		head = head->next;
	}
	return (NULL);
}
