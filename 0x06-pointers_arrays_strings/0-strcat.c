#include "main.h"
/**
 * _strcat - concatenated two string
 * @dest: get first string
 * @src: get second string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, x = 0, y, len;

	while (dest[i])
		i++;
	while (src[x])
		x++;
	len = i + x;
	for (y = 0; y <= len; y++)
	{
		dest[i] = src[y];
		i++;
	}
	return (dest);
}
