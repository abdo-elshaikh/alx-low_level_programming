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
	char * ptr;
	unsigned i = 0;

	ptr = (char *)malloc(size * sizeof(char));
	while (i < size)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}	
