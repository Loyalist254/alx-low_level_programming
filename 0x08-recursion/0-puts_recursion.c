#include "main.h"
/**
 * _puts_recursion - function like puts();
 * @j: input
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *j)
{
	if (*j)
	{
		_putchar(*j);
		_puts_recursion(j + 1);
	}

	else
		_putchar('\n');
}

