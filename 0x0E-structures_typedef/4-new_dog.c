#include "dog.h"
#include <stdlib.h>
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

	int lenname = 0, lenowner = 0, i;
	char *cpyname;
	char *cpyowner;

	while (name[lenname])
		lenname++;
	while (owner[lenowner])
		lenowner++;

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	cpyname = malloc((lenname + 1));
	for (i = 0; name[i]; i++)
		cpyname[i] = name[i];
	cpyname[i] = '\0';

	cpyowner = malloc((lenowner + 1));

	for (i = 0; owner[i]; i++)
		cpyowner[i] = owner[i];
	cpyowner[i] = '\0';

	new_dog->name = cpyname;
	new_dog->age = age;
	new_dog->owner = cpyowner;
	return (new_dog);
}



