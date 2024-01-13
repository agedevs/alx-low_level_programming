#include <stdlib.h>
#include "lists.h"

/**
  * add_dnodeint_end - Function with new nodes at end
  * of doubly linked list
  * @head: Head variable to doubly linked list
  * @n: Variable with new nodes placement
  *
  * Return: The new head of the doubly linked list
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = NULL, *nodep = NULL;

	nodep = malloc(sizeof(dlistint_t));
	if (nodep == NULL)
		return (NULL);

	nodep->n = n;
	if (*head)
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;

		nodep->next = NULL;
		nodep->prev = temp;
		temp->next = nodep;
		return (nodep);
	}

	nodep->next = *head;
	nodep->prev = NULL;
	*head = nodep;
	return (*head);
}
