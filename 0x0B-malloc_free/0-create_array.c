#include "main.h"
#include <stdlib.h>
/**
* create_array - function creates an array of chars
* @size: size of array
* @c: char to assign
* Return: pointer to array, NULL if fail
*
*/
char *create_array(unsigned int size, char c)
{
char *str;
unsigned int k;

str = malloc(sizeof(char) * size);
while (size == 0 || str == NULL)
return (NULL);

for (i = 0; k < size; k++)
str[k] = c;
return (str);
}
