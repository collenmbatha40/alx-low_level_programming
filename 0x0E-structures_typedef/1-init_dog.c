#include "dog.h"
/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to struct
 * @name: pointer to dog name
 * @age: dog's age
 * @owner: pointer to dog owner's name
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
