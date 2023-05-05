#include "main.h"
/**
 * clear_bit - function sets value of bit to 0
 * @index: index of the bit to clear
 *@n: pointer
 * Return: 1 if it worked, or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n &= ~(1UL << index);
	return (1);
}
