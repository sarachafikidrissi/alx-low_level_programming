#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - a function that crreates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to newly created dog structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *cpyname, *cpyowner;
	int len1, len2;

	if (name == NULL || owner == NULL)
		return (NULL);

	len1 = strlen(name);
	len2 = strlen(owner);

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	cpyname = malloc(len1 + 1);
	cpyowner = malloc(len2 + 1);

	if (!cpyname || !cpyowner)
	{
		free(cpyname);
		free(cpyowner);
		free(new_dog);
		return (NULL);
	}
	strcpy(cpyname, name);
	strcpy(cpyowner, owner);

	new_dog->name = cpyname;
	new_dog->age = age;
	new_dog->owner = cpyowner;
	return (new_dog);
}
