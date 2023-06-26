#include "main.h"
/**
 * print_rev - print string in reverse
 * @s: get string
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0, len = 0;

	while (s[len])
		len++;
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
