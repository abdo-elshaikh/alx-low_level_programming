#include "main.h"
/**
 * more_numbers - prints more numbers
 * Return: void
 */

void more_numbers(void)
{
	int i;
	char x, y;

	for (i = 0; i < 10; i++)
	{
		for (x = 0; x <= 14; x++)
		{
			y = x;
			if (x > 9)
			{
				_putchar('1');
				y = x % 10;
			}
			else
				_putchar(y + '0');
		}
		_putchar('\n');
		y = 0;
	}
}
