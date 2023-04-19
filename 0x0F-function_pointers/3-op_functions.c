#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * op_add-functions returns sum
 * @a: input value
 * @b: input value
 * Return: sum
 */
int op_add(int a, int b)
{
	int sum = a + b;

	return (sum);
}

/**
 * op_sub - function returns difference btwn two numbers.
 * @a: input value
 * @b: input value
 * Return: The difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - product of two numbers.
 * @a: input value
 * @b: input value
 * Return: product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_mod - reminder of division btwn two numbers.
 * @a: input value
 * @b: input value
 * Return: result
 *
 */
int op_mod(int a, int b)
{
	return (a % b);
}

/**
 * op_div - division of two numbers.
 * @a: input value
 * @b: input value
  * Return: result
  */
int op_div(int a, int b)
{
	return (a / b);
}
