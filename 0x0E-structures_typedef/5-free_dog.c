#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - Freeing up spaces after used
 * @d: The pointer that stored the struct address
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}

	free(d->owner);
	free(d->name);
	free(d);
}
