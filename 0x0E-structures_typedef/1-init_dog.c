#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to the struct dog variable to initialize
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: This function initializes a variable of type struct dog with
 * the given name, age, and owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
