#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: first pointer
 * @accept: get chaeracter pointer
 * Return:number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, x = 0, count = 0;

	while (s[x] != ' ')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (accept[i] == s[x])
			{
				count++;
			}
		}
		x++;
	}
	return (count);
}
