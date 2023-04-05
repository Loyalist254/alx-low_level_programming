#include "main.h"
/**
 * _print_rev_recursion - Prints a string in reverse.
 * @j: The string to be printed.
 */
void _print_rev_recursion(char *j)
{
	if (*j)
	{
		_print_rev_recursion(j + 1);
		_putchar(*j);
	}
}

