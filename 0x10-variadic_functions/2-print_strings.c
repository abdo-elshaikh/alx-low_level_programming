#include "variadic_functions.h"
/**
 * print_strings - function
 * @separator: get sep
 * @n: count
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list lst;
	char *str;
	unsigned int i = 0;

	va_start(lst, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(lst, char *);
		if (str != NULL)
		{
			if (separator == NULL || i == (n - 1))
			{
				printf("%s", str);
			}
			else
			{
				printf("%s%s", str, separator);
			}
		}
		else
		{
			printf("(nil)");
		}
	}
	printf("\n");
	va_end(lst);
}
