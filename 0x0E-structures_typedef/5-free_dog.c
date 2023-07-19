#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function frees dogs
 * @d: pointer to a dog to be freed
 * Description:  description
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
