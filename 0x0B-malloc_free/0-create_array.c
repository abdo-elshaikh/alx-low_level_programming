#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: get array size
 * @c: get character
 * Return: NULL or pointer
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i = 0;

	ptr = (char *)malloc(size * sizeof(char));
	if (size == 0 || ptr == NULL)
		return (NULL);
	while (i < size)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}
