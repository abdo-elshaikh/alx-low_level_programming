#include "main.h"
/**
 * _strcmp - copire betwine to string
 * @s1: first string
 * @s2: second string
 * Retuen: 0 if matching , ns1 - ns2 if not matching
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] || s2[i]; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}
