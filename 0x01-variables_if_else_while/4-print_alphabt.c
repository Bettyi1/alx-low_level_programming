#include <stdio.h>
/**
 * main - print aplhabets in lower case using putchar
 *
 * Reeturn: always 0
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);
}
