#include <stdio.h>
#include<stdlib.h>
#include "main.h"
/**
 * main - main function
 * @argc: arguments to be passed
 * @argv: array of character  strings
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
