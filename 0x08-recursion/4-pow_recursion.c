#include "main.h"
/**
 * _pow_recursion - value of x raised to the power of y
 * @x: get intager first
 * @y: get intager second
 * Return: x
 */
int _pow_recursion(int x, int y)
{
	int s = x;

	if (y == 0)
		s = 1;
	else if (y < 0)
		s = -1;
	else
		s = x * _pow_recursion(s, (y - 1));
	return (s);
}
