#include "main.h"
/**
 * _sqrt_recursion - returns sqaure root of a number
 * @n: input value
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
		return (_sqrt_recursion(n, 0));
	}
}
	/**
	 * _sqrt_recursion   function prints actual nuatural numbers
	 * @n: input value
	 * @i: input value
	 * Return: actual square root
	 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
		if (i * i == n)
		{
			return (i);
			return (actual_sqrt_recursion(n, i + 1));
		}
}
