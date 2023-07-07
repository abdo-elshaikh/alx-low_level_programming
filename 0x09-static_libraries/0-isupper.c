#include "main.h"
/**
 * _isupper - print a char is upper or not
 * @c: get charcter
 * Return: 1 or 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
