#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: get intager
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	char *c;

	c = (char *)malloc(b);
	if (c == NULL)
	{
		exit(98);
		return (NULL);
	}
	return (c);
}
