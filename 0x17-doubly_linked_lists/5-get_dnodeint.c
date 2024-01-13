#include <stdlib.h>
#include "lists.h"

/**
  * get_dnodeint_at_index - Function node from a doubly linked list
  * @head: Head variable of doubly linked list
  * @index: Variable index for doubly linked list
  *
  * Return: the doubly linked list node
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int changes = 0;

	if (head)
	{
		while (temp != NULL)
		{
			if (changes == index)
				return (temp);

			temp = temp->next;
			++changes;
		}
	}

	return (NULL);
}
