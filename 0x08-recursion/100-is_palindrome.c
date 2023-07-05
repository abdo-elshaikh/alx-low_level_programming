#include "main.h"
/**
 * is_palindrome_recursive - is palindrome recursive
 * @str: string pointer
 * @start: get start intager
 * @end: get end intager
 * Return: 0 or 1
 */
int is_palindrome_recursive(char *str, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}

	if (str[start] == str[end])
	{
		return (is_palindrome_recursive(str, start + 1, end - 1));
	}

	return (0);
}
/**
 * _strlen_recursion - length of a string
 * @s: get string
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s != '\0')
	{
		length += _strlen_recursion(s + 1) + 1;
	}
	return (length);
}
/**
 * is_palindrome - checher for the plane
 * @s: string pointer
 * Return: 0 or 1
 */
int is_palindrome(char *s)
{
	int length = _strlen_recursion(s);

	return (is_palindrome_recursive(s, 0, length - 1));
}
