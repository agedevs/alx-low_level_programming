#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - This function frees up singly linked list.
 * @head: This points to pointers head linked list.
 *
 * Return: None returned.
 */

void free_listint2(listint_t **head)
{
	listint_t *temp_variable;

	if (head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		temp_variable =  *head;
		*head = (*head)->next;
		free(temp_variable);
	}
}
