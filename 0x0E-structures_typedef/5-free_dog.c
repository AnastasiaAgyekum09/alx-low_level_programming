#include <stdlib.h>
#include "dog.h"
/**
 * free_dog -write function that frees memory allocated for a struct dog
 * @d: pointer to struct dog
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
