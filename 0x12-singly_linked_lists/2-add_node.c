#include "lists.h"
/**
 * add_node - Adds to the list
 * @head: Pointer pointing to next double pointer
 * @str: String to be considered in adding
 * 
 * Return: The added node is done
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	size_t number =  0;

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
	temp->next = *head;
	*head = temp;
	return (temp);
}
