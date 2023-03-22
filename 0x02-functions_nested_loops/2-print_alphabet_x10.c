#include "main.h"

/**
 * print_alphabet - prints lower case ten times
 *
 * return: is 0;
 */


void print_alphabet(void)
{
	int i;
	char j;

	for (i = 1 ; i <= 10 ; i++)
	{
		for (j = 'a' ; j <= 'z' ; j++)
			_putchar(j);
		_putchar('\n');

	}
}
