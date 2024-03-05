#include "main.h"
/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: Number to root
 *Return: The natural square root of 'n' or -1 if less than 0
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n <= 1)
	{
		return (n);
	}
	return (_sqrt_recursive(n, 1));
}

/**
 * _sqrt_recursive - Finds root
 * @n: Number to root
 * @poss: possible root number
 *Return: Square root of 'n' or -1 if less than 0 or bigguer than n
 */
int _sqrt_recursive(int n, int poss)
{
	if (poss * poss == n)
	{
		return (poss);
	}
	if (poss * poss < 0 || poss * poss  > n)
	{
		return (-1);
	}
	return (_sqrt_recursive(n, poss + 1));
}
