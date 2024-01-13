#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - Function that prints elements of double linked list
 * @h: Double linked variable to be considered
 *
 * Return: Double linked list node return
 */
size_t print_dlistint(const dlistint_t *h)
{
	int size = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		++size;
		h = h->next;
	}

	return (size);
}
