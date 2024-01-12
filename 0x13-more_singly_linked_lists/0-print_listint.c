#include "lists.h"
#include <stdio.h>

/**
 * print_listint - This function prints all the elements of a list.
 * @h: pointer to the head of linked list.
 *
 * Return: all the elements of the list.
 */

size_t print_listint(const listint_t *h)
{
	size_t ls = 0;

	/* A pointer head here */
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		ls++;
	}
	return (ls);
}
