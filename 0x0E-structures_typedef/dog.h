#ifndef STRUCT_DOG_H
#define STRUCT_DOG_H
/**
 * struct dog -contains the dog elements
 *
 * @name: input info
 * @age: input info
 * @owner: input infor
 */
struct dog
{
	char *name;
	float age;
	char *owner;
}

/**
 * dog_t - typedef for struct dog
 * @name: first name
 * @owner: input elemet
 * @age: input element
 */
typedef struct dog dog_poppy;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);



#endif
