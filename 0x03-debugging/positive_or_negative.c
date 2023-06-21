#include "main.h"
#include <stdlib.h>
#include <time.h>
/**
 * positive_or_negative - print negative or postive intager
 * @n: Get a random number and print the number
 * Return: 0
 */
void positive_or_negative(int n)
{
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n < 0)
		printf("%i is negative\n", n);
	else
		printf("%i is zero\n", n);
}
