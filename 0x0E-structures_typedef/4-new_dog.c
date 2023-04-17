#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
  * _strlen - functions returns string length
  * @str: input value
  * Return: length of string
  */
int _strlen(char *str)
{
	int j = 0;

	while (str[j] != '\0')
	{
		j++;
	}
	return (j);
}
/**
 * _strcopy - function copies string
 * @dest: input value
 * @src: input value
 * Return: pointer to dest
 */
char *_strcopy(char *dest, char *src)
{
	int k = 0;

	for (k = 0 ; src[k] ; k++)
		dest[k] = src[k];
	dest[k] = '\0';
	return (dest);
}
/**
 * new_dog - main function
 * @name: input value
 * @age: input value
 * @owner: input value
 * Return: pointer if (Success),otherwise  NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogy;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dogy = malloc(sizeof(dog_t));
	if (dogy == NULL)
		return (NULL);

	dogy->name = malloc(sizeof(char) * (len1 + 1));
	if (dogy->name == NULL)
	{
		free(dogy);
		return (NULL);
	}
	dogy->owner = malloc(sizeof(char) * (len2 + 1));
	if (dogy->owner == NULL)
	{
		free(dogy);
		free(dogy->name);
		return (NULL);
	}
	dogy->name = _strcopy(dogy->name, name);
	dogy->age = age;
	dogy->owner = _strcopy(dogy->owner, owner);
	return (dogy);
}
