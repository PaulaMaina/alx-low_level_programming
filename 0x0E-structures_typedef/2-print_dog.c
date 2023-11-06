#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints a struct d
 * @d: struct to be printed
 *
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: ");
		if (d->name == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", d->name);

		printf("Age: ");
		if (d->age == NULL)
			printf("(nil)\n");
		else
			printf("%f\n", d->age);
		printf("Owner: ");
		if (d->owner == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", d->owner);
	}
}
