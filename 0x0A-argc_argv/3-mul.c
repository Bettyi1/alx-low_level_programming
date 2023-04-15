#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _atoi - function prototype that converts string to integer
 * @s: string
 * Return: int
 */
int _atoi(char *s)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int len = 0;
	int g = 0;
	int digit = 0;

	while (s[len] != '\0')
		len++;
	while (i < len && g == 0)
	{
		if (s[i] == '-')
			++j;
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (j % 2)
				digit = -digit;
			k = k * 10 + digit;
			g = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			g = 0;
		}
		i++;
	}
	if (g == 0)
		return (0);
	return (k);
}

/**
 * main - function multiplies numbers
 * @argc: input value
 * @argv: inout valaue
 * Return: 0, 1
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)

	{

		printf("Error\n");

		return (1);
	}
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);
	return (0);
}
