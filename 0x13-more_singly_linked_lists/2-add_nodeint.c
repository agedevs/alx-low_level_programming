#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint -  This function that adds a new node at the beginning,
 * of a listint_t list.
 * @head: The pointer that points to head of linked list.
 * @n: Add data to list.
 *
 * Return: New element address returned or NULL.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	temp->n = n;
	temp->next = *head;
	*head = temp;
	return (temp);
}
