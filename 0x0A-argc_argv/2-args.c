#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - main function
 * @argc: arguments to be passed
 * @argv: array input
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int j;

	for (j = 0 ; j < argc ; j++)
	{
		printf("%s\n", argv[j]);
	}
	return (0);
}
