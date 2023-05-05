#include "main.h"
/**
 * flip_bits - function returns number of bits
 * @n: input value 1
 * @m: second number
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n ^ m;
	unsigned int num = 0;

	while (result)
	{
		num += result & 1;
		result >>= 1;
	}
	return (num);
}

