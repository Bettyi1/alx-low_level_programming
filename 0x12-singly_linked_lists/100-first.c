#include <stdio.h>
#include <stdlib.h>
void func(void) __attribute__((constructor)), before_main();
/**
 * func - function prints text before the main
 * descrip - exeecut3 function
 *
 */
void func(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
