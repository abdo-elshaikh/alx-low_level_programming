#include "main.h"
/**
 * print_square - prints a square
 * @size: git intager size
 * Return void
 */
void print_square(int size)
{
	int i = 0 , x = 0;

	while (i < size && size > 0)
	{
		for (x = 0; x < size ; x++)
			_putchar('#');
		_putchar('\n');
		i++;
	}
	if (size == 0)
		_putchar('\n');
}
