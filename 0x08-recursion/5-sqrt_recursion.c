#include "main.h"

int actual_sqrt_recursion(int j, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @j: number to calculate the square root of
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int j)
{
	if (j < 0)
		return (-1);
	return (actual_sqrt_recursion(j, 0));
}

/**
 * actual_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @j: number to calculate the sqaure root of
 * @i: iterator
 *
 * Return: the resulting square root
 */
int actual_sqrt_recursion(int j, int i)
{
	if (i * i > j)
		return (-1);
	if (i * i == j)
		return (i);
	return (actual_sqrt_recursion(j, i + 1));
}
