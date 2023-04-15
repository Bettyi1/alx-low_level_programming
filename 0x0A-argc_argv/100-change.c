#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - function prints minimum number of coins
 * @argc:input value
 * @argv: array of arguments
 * Return: 0, 1
 */
int main(int argc, char *argv[])
{
	int i, num, count_c;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	count_c = 0;

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5 && num >= 0; i++)
	{
		while (num >= coins[i])
		{
			count_c++;
			num -= coins[i];
		}
	}
	printf("%d\n", count_c);
	return (0);
}
