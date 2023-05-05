#include "main.h"
/**
 * get_bit - function returns value of an index
 * @n: number
 * @index: index
 * Return: value of bit index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int num;

	num  = (n >> index) & 1;
	return (num);

	if (index > 63)
		return (-1);
	return (num);
}
