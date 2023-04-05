#include "main.h"

int check_pal(char *j, int i, int len);
int _strlen_recursion(char *j);

/**
 * is_palindrome - checks if a string is a palindrome
 * @j: string to reverse
 *
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *j)
{
	if (*j == 0)
		return (1);
	return (check_pal(j, 0, _strlen_recursion(j)));
}

/**
 * _strlen_recursion - returns the length of a string
 * @j: string to calculate the length of
 *
 * Return: length of the string
 */
int _strlen_recursion(char *j)
{
	if (*j == '\0')
		return (0);
	return (1 + _strlen_recursion(j + 1));
}

/**
 * check_pal - checks the characters recursively for palindrome
 * @j: string to check
 * @i: iterator
 * @len: length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */
int check_pal(char *j, int i, int len)
{
	if (*(j + i) != *(j + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(j, i + 1, len - 1));
}

