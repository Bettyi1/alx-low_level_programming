#include <stdio.h>
#include "main.h"
/**
 * main - function prints program name
 * @argc: function arguments
 * @argv: array of strings
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
