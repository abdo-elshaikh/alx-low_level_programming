#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: get string
 * Return: void
 */
void puts_half(char *str)
{
	int i = 0, x = 0;
	int len;

	while (str[i])
	{
		i++;
	}
	if (i % 2)
		len = (i - 1) / 2;
	else
		len = i / 2;

	for (x = len; x < i; x++)
		_putchar(str[x]);
	_putchar('\n');
}
