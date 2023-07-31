#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a structure data
 * @name: First memeber
 * @age: Second memeber
 * @owner: last memeber
 *
 * Description: a structure that contains information of a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
