#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: get intager
 * Return: void
 */
void print_diagonal(int n)
{
	int i = 0, x = 0;

	while (i < n && n > 0)
	{
		for (x = 0; x < i ; x++)
			_putchar(' ');

		_putchar('\\');
		_putchar('\n');
		i++;
	}
	if (n == 0)
		_putchar('\n');
}
