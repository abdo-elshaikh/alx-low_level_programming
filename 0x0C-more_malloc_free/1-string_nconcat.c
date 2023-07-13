#include "main.h"
#include <stdlib.h>
/**
 * _strlen - sttring length
 * @s: get string
 * Return: len
 */
unsigned int _strlen(char *s)
{
	unsigned int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * string_nconcat - conact strings
 * @s1: first string
 * @s2: second string
 * @n: count intager
 * Return: pointer or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int len1 = 0, len2 = 0;
	unsigned int i, j;

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	ptr = malloc(((len1 + len2) * sizeof(char)) + 1);
	if (ptr == NULL)
		return (NULL);

	if (s1 != NULL)
	{
		if (n >= len2)
		{
			for (i = 0; s1[i] != '\0'; i++)
				ptr[i] = s1[i];
			if (s2 != NULL)
			{
				for (j = 0; s2[i] != '\0'; j++, i++)
					ptr[i] = s2[j];
			}
		}
		else
		{
			for (i = 0; s1[i] != '\0'; i++)
				ptr[i] = s1[i];
			if (s2 != NULL)
			{
				for (j = 0; j < n; j++, i++)
					ptr[i] = s2[j];
			}
		}
	}
	ptr[i] = '\0';
	return (ptr);
}
