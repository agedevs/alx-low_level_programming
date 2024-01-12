#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - This function will free the linked list.
 * @head: This is a pointer that points to pointer to make linked list.
 *
 * Return: None returned.
 */

void free_listint(listint_t *head)
{
	if (head == NULL)
	{
		return;
	}
	free_listint(head->next);
	free(head);
}
