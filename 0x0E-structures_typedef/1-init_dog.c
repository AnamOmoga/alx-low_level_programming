#include <stdlib.h>
#include "dog.h"

/**
 * inti_dog - intializes a variable of type struct dog
 * @d: pointer to struct dog to intialize
 * @name: name to intialize
 * @age: age to initialize
 * @owner: owner to intialize
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
