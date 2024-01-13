#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * free_dlistint - Free doubly linked
  * @head: Head variable of doubly linked list
  *
  * Return: Nothing
  */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head, *next = NULL;

	while (temp != NULL)
	{
		next = temp->next;
		free(temp);
		temp = next;
	}
}
