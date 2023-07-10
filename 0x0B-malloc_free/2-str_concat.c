#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: NULL or pointer
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, x = 0, len = 0;
	int y, z;
	char *ptr;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		i++;
		len++;
	}
	while (s2[x] != '\0')
	{
		x++;
		len++;
	}
	ptr = (char *)malloc(len * sizeof(char));
	for (y = 0; y < i; y++)
	{
		ptr[y] = s1[y];
	}
	for (z = 0; z < x; z++)
	{
		ptr[y] = s2[z];
		y++;
	}
	return (ptr);
}
