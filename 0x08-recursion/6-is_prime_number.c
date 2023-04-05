#include "main.h"

int actual_prime(int j, int i);

/**
 * is_prime_number - says if an integer is a prime number or not
 * @j: number to evaluate
 *
 * Return: 1 if j is a prime number, 0 if not
 */
int is_prime_number(int j)
{
	if (j <= 1)
		return (0);
	return (actual_prime(j, j - 1));
}

/**
 * actual_prime - calculates if a number is prime recursively
 * @j: number to evaluate
 * @i: iterator
 *
 * Return: 1 if j is prime, 0 if not
 */
int actual_prime(int j, int i)
{
	if (i == 1)
		return (1);
	if (j % i == 0 && i > 0)
		return (0);
	return (actual_prime(j, i - 1));
}

