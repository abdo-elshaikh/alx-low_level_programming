#include "main.h"
/**
 * factorial - factorial of a given number
 * @n: get intager
 * Return: factorial of a given number
 */
int factorial(int n)
{
	int fac = n;

	if (n > 1)
	{
		fac = factorial(n - 1) * fac;
	}
	else if (n == 0)
		fac = 1;
	else if (n < 0)
		fac = -1;
	else
		return (fac);
	return (fac);
}
