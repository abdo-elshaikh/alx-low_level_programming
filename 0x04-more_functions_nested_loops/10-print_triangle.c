#include "main.h"
/**
 * print_triangle - print triangle
 * @size: get intager
 * Return: void
 */
void print_triangle(int size)
{
	int i = 0, x = 0;
	int line;

	while (i < size && size > 0)
	{
		line = size - (i + 1);
		for (x = 0; x < size ; x++)
		{
			if (x < line)
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
		i++;
	}
	if (i == 1)
		_putchar('\n');
}
