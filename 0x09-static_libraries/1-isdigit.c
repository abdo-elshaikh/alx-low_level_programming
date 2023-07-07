#include "main.h"
/**
 * _isdigit - print intager is digits or not
 * @n: get intager
 * Return: 1 or 0
 */
int _isdigit(int n)
{
	if (n >= 48 && n <= 57)
		return (1);
	else
		return (0);
}
