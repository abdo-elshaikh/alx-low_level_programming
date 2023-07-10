#include "main.h"
#include <stdlib.h>
/**
 * _strdup - pointer to a newly allocated space in memory
 * @str: pointer of array
 * Return: NULL or pointer
 */
char *_strdup(char *str)
{
	int i = 0, x = 0;
	char *p;

	if (str != NULL)
	{

		while (str[i] != '\0')
		{
			i++;
		}
		p = (char *)malloc(i * sizeof(char));
		for (x = 0; x < i; x++)
		{
			p[x] = str[x];
		}
	}
	else
	{
		p = NULL;
	}
	return (p);
}
