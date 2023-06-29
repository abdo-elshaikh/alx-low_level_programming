#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @c: git string
 * Return: char c
 */
char *string_toupper(char *c)
{
	int i, n = 0;

	for (i = 0; c[i]; i++)
	{
		if (c[i] >= 97 && c[i] <= 122)
		{
			n = c[i] - 97;
			c[i] = 65 + n;
		}
	}
	return (c);
}
