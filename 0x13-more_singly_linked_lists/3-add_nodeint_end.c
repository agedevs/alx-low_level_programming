#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end -  This function adds a new node at the end of,
 * the listint_t list.
 * @head: The pointer that points to the head of linked list.
 * @n: This adds data to the list.
 *
 * Return: The temp new element, or NULL when failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *changer = *head;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = NULL;
	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}
	while (changer->next != NULL)
		changer = changer->next;
	changer->next = temp;
	return (temp);
}
