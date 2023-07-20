#include "variadic_functions.h"
/**
 * print_numbers - function
 * @separator: get sep
 * @n: count arg
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list lst;
	unsigned int i = 0;

	va_start(lst, n);
	for (i = 0; i < n; i++)
	{
		if (separator == NULL || i == (n - 1))
		{
			printf("%d", va_arg(lst, int));
		}
		else
		{
			printf("%d%s", va_arg(lst, int), separator);
		}
		
	}
	printf("\n");
	va_end(lst);
}
