#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * list_len - Lists out the length of chuncks of data
 * @h: The pointer pointing to the next chunck
 *
 * Return: The list is returned
 */
size_t list_len(const list_t *h)
{
	size_t num;

	for (num = 0; h != NULL; num++)
	{
		h = h->next;
	}
	return (num);
}
