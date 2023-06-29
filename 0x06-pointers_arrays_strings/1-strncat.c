#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: get first string
 * @src: get second string
 * @n: get number
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, x = 0;

	while (dest[x])
		x++;
	for (i = 0; i < n && src[i]; i++)
	{
		dest[x + i] = src[i];
		x++;
	}
	dest[x + i] = '\0';
	return (dest);
}
