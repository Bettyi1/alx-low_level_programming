#include "main.h"
/**
 * set_bit - function sets value of a bit to 1
 * @n: bit value pointer
 * @index: index
 * Return: 1 if tit works, -1 if it fails
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
