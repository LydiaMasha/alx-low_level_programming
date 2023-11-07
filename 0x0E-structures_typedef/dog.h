#ifndef DOG_H_
#define DOG_H_

/**
 * struct dog - Information for a dog
 * @name: Member 1, Name of dog
 * @age: Member 2, Age of dog
 * @owner: Member 3, owner of dog
 *
 * Description: Longer Description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;


void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
