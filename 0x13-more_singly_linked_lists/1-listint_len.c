#include "lists.h"
#include <stdio.h>

/**
 * listint_len -  This function will return the number,
 * of elements present in a linked list.
 * @h: pointer to the head of linked list.
 *
 * Return: number of elements.
 */

size_t listint_len(const listint_t *h)
{
	size_t ls = 0;

	while (h != NULL)
	{
		h = h->next;
		ls++;
	}
	return (ls);
}
