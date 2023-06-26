#include "main.h"
/**
 * swap_int - swaps the tow values
 * @a: get first intager
 * @b: get second intager
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
