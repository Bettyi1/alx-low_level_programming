#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * *rot13 - function encodes string to rot13
 *@s:  a ointer for string
 * Return: string
 */
char *rot13(char *s)
{
	int a;
	int b;

	char rot_dat[] =
		"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot_dat2[] =
		"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0 ; s[a] != '\0' ; a++)
	{
		for (b = 0 ; b < 52 ; b++)
		{
			if (s[a] == rot_dat[b])
					{
				s[a] = rot_dat2[b];
				break;
					}
		}
	}
	return (s);
}
