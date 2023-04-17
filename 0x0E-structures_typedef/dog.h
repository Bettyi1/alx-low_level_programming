#ifndef STRUCT_DOG_H
#define STRUCT_DOG_H
/**
 * struct dog -contains the dog elements
 * @name: input info
 * @age: input info
 * @owner: input info
 * Description: long description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/* other prototypes*/
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif

