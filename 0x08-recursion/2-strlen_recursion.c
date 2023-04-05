#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string
 * @j: The string to be measured
 *
 * Return: The length of the string
 */
int _strlen_recursion(char *j)
{
	int lent = 0;

	if (*j)
	{
		lent++;
		lent += _strlen_recursion(j + 1);
	}

	return (lent);
}
