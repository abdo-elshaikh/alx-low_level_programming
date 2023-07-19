#include "function_pointers.h"
/**
 * array_iterator - function given as a parameter on each element of an array
 * @array: pointer of array
 * @size: size of array
 * @action: action to add
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (action && array)
	{
		while (i < size)
			action(array[i++]);
	}
}
