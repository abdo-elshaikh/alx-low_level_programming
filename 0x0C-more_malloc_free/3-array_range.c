#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers,
 * @min: start value.
 * @max: final value.
 * Return: pointer to the array.
 **/
int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (max < min)
		return (NULL);
	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; (min + 1) <= max; i++)
		ptr[i] = min + i;
	return (ptr);
}
