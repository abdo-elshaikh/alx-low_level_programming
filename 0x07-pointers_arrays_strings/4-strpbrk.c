#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s:string pointer
 * @accept: another string pointer
 * Return: pointer
 */
char *_strpbrk(char *s, char *accept)
{
	char *tmp = accept;

	while (*s != ' ')
	{
		while (*accept != '\0')
		{
			if (*accept == *s)
			{
				return (s);
			}
			accept++;
		}
		accept = tmp;
		s++;
	}
	return (0);
}
