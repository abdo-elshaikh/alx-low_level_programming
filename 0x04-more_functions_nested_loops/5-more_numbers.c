#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return: void
 */
void more_numbers(void)
{
	int i, x, y = 0;

	for (i = 0; i < 10; i++)
	{
		for (x = 0; x <= 14; x++)
		{
			if (x > 9)
			{
				_putchar('1');
				_putchar(y + '0');
				y++;
			}
			else
				_putchar(x + '0');
		}
		_putchar('\n');
		y = 0;
	}
	_putchar('\n');
}