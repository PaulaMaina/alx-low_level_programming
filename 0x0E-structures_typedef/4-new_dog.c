#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: NULL if function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *dog_new;
	int a, b, c;
	char *cp_name, *cp_owner;

	dog_new = malloc(sizeof(struct dog));
	if (dog_new == NULL)
		return (NULL);

	for (a = 0; name[a] != '\0'; a++)
		;
	for (b = 0; owner[b] != '\0'; b++)
		;

	cp_name = malloc(sizeof(char) * a + 1);
	if (cp_name == NULL)
	{
		free(dog_new);
		return (NULL);
	}

	cp_owner = malloc(sizeof(char) * b + 1);
	if (cp_owner == NULL)
	{
		free(cp_name);
		free(dog_new);
		return (NULL);
	}

	for (c = 0; c <= a; c++)
		cp_name[c] = name[c];
	for (c = 0; c <= b; c++)
		cp_owner[c] = owner[c];

	dog_new->name = cp_name;
	dog_new->age = age;
	dog_new->owner = cp_owner;

	return (dog_new);
}
