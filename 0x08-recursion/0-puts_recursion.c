#include "main.h"
/**
 * _puts_recursion - prints a string
 * @s: get string
 * Return: void
 */
void _puts_recursion(char *s)
{
	int i = 0;

	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
