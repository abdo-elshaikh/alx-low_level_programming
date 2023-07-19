#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: pointer for array
 * @size: size of intager
 * @cmp: function pointer
 * Return: 0 or 1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;
	int elem = 0;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		while (i < size)
		{
			elem = cmp(array[i]);
			if (elem)
				return (i);
			i++;
		}
	}
	return (-1);
}
