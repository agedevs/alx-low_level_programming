#include <stdlib.h>
#include "lists.h"

/**
  * dlistint_len - Function that counts double linked list
  * @h: Double linked list counter variable to be considered
  *
  * Return: Double linked list
  */
size_t dlistint_len(const dlistint_t *h)
{
	int size = 0;

	while (h != NULL)
	{
		++size;
		h = h->next;
	}

	return (size);
}
