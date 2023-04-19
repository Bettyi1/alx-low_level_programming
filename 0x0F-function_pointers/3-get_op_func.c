#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * get_op_func - selects the correction function
 * @s:argument
 * Return: pointer to funtion
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};
	int k = 0;

	while (ops[k].op != NULL && *(ops[k].op) != *s)
		k++;
	return (ops[k].f);
}
