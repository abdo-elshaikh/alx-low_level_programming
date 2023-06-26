#include "main.h"
/**
 * rev_string -  reverses a string
 * @s: get charcter
 * Return: void
 */
void rev_string(char *s)
{
	int len = 0;
	int i, j;
	char temp;

	while (s[len])
		len++;

	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
