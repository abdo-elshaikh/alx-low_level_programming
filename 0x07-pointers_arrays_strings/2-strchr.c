#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: get string
 * @c: get character
 * Return: pointer c
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (0);
}
