#include "main.h"
/**
 * _pow_recursion - function returns given value
 * @x: input value
 * @y: input value
 * Return: -1 or x raised to y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
