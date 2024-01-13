#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * delete_dnodeint_at_index - ...
  * @head: Head variable of doubly linked list
  * @index: Variable index for doubly linked list
  *
  * Return: Result at index
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current_temp = NULL, *temp = NULL;
	unsigned int size = 0;

	if (head && *head)
	{
		size = dlistint_len(*head);
		if (index > size)
			return (-1);

		if (index == 0)
			return (delete_first_dnode(head));

		current_temp = get_dnodeint_at_index(*head, index);
		if (current_temp)
		{
			temp = current_temp;
			if (size - 1 == index)
				current_temp->prev->next = current_temp->next;
			else
			{
				current_temp->prev->next = current_temp->next;
				current_temp->next->prev = current_temp->prev;
			}

			free(temp);
			return (1);
		}
	}

	return (-1);
}

/**
  * delete_first_dnode - Doubly linked list first node del
  * @head: Head variable of doubly linked list
  *
  * Return: 1 if is deleted
  */
int delete_first_dnode(dlistint_t **head)
{
	dlistint_t *current = *head, *temp = NULL;

	temp = current;
	if (current->next)
	{
		current = current->next;
		current->prev = temp->prev;
		*head = current;
	}
	else
	{
		*head = NULL;
	}

	free(temp);
	return (1);
}

/**
  * get_dnodeint_at_index - Doubly linked list new node
  * @head: Head variable of doubly linked list
  * @index: The index for doubly linked list
  *
  * Return: node of doubly linked list
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int changes = 0;

	if (head)
	{
		while (current != NULL)
		{
			if (changes == index)
				return (current);

			current = current->next;
			++changes;
		}
	}

	return (NULL);
}

/**
  * dlistint_len - Doubly linked list element counter
  * @h: Counted double linked list
  *
  * Return: Number of doubly linked list
  */
size_t dlistint_len(const dlistint_t *h)
{
	int size = 0;

	while (h != NULL)
	{
		++size;
		h = h->next;
	}

	return (size);
}
