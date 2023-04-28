#include <stdio.h>
#include <stdlib.h>

/**
 * first - function prints text before the main
 * descrip - exeecut3 function
 */
void __attribute__((constructor)) before_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
