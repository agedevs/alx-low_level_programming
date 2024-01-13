#include <stdlib.h>
#include "lists.h"

/**
  * sum_dlistint - Sum all n data of a doubly linked list
  * @head: Head variable of doubly linked list
  *
  * Return: Result sum
  */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int add_count = 0;

	if (head)
	{
		while (temp != NULL)
		{
			add_count += temp->n;
			temp = temp->next;
		}
	}

	return (add_count);
}
