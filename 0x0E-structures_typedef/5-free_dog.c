#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees dog memory
 * @d: pointer to struct dog
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d == 0)
	{
		return;
	}
	free(d->name);
	free(d->owner);
	free(d);
}
