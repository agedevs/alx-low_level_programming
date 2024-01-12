#include "lists.h"
/**
 * add_node_end - This function adds node to end
 * @head: Points us to the address of other pointers
 * @str: Is the string data to be considered
 *
 * Return: Done adding node to end
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *temp_last;
	size_t number = 0;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	while (str[number])
	{
		number++;
	}
	temp->len = number;
	temp->str = strdup(str);
	if (*head == NULL)
	{
		temp->next = *head;
		*head = temp;
	}
	else
	{
		temp->next = NULL;
		temp_last = *head;
		while (temp_last->next)
		{
			temp_last = temp_last->next;
		}
		temp_last->next = temp;
	}
	return (temp);
}
