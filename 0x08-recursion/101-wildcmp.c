#include "main.h"

/**
 * wildcmp - Compare strings
 * @j1: pointer to string params
 * @j2: pointer to string params
 * Return: 0
 */

int wildcmp(char *j1, char *j2)
{
	if (*j1 == '\0')
	{
		if (*j2 != '\0' && *j2 == '*')
		{
			return (wildcmp(j1, j2 + 1));
		}
		return (*j2 == '\0');
	}

	if (*j2 == '*')
	{
		return (wildcmp(j1 + 1, j2) || wildcmp(j1, j2 + 1));
	}
	else if (*j1 == *j2)
	{
		return (wildcmp(j1 + 1, j2 + 1));
	}
	return (0);
}

