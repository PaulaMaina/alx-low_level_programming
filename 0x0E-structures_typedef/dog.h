#ifndef DOG_H_
#define DOG_H_

/**
 * struct dog - new type struct dog
 * @name: first member
 * @age: second member
 * @owner: third member
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
