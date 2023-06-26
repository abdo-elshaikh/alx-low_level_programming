#include "main.h"
/**
 * _strcpy - copy istring to another
 * @dest: first string
 * @src: second string
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, len = 0;

	while (src[len])
		len++;

	for (i = 0; i <= len; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
