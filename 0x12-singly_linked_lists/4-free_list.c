#include "lists.h"
/**
 * free_list - Frees the unused memory allocated
 * @head: The first and begining of the chunck
 *
 * Return: No return but freedom is returned
 */
void free_list(list_t *head)
{
	list_t *temp_free;

	while (head != NULL)
	{
		temp_free = head;
		head = head->next;
		free(temp_free->str);
		free(temp_free);
	}
	free(head);
}
