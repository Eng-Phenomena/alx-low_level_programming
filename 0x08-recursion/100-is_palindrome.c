#include "main.h"

int palindrom(char *s, int i, int len);

/**
 * is_palindrome - checks for palindrome
 * @s: string pointer
 * Return: boolean expression
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - len of string
 * @s: string pointer
 * Return: len of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s++));
}

/**
 * palindrom - checks the string comparing last by first
 * @s: string pointer
 * @i: int 
 * @len: len of string
 * Return: bollean expression
 */
int palindrom(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (palindrom(s, i + 1, len - 1));
}
