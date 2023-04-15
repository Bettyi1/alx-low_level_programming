#include <stdio.h
#include <stdlib.h>
#include "main.h"
/**
 * main - function prints minimum number of coins
 * make change for an amount of money
 * @argc:input value
 * @argv: array of arguments
 * Return: 0, 1
 */
int main(int argc, char *argv[])
{
	int i;
	int num = atoi(argv[1]);
	int count_c = 0;
	int coins[] = {20, 10, 5, 1};

	if (argc != 1)
	{
		printf("Error\n");
		return (1);
	}
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
