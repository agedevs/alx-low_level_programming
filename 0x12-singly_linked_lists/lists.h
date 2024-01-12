#ifndef LIST_FILE_H
#define LIST_FILE_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct list_str - This is a singly linked list
 * @str: string that is assigned a memory space
 * @len: The length of the taken string
 * @next: The pointer pointing to next node
 *
 * Description: Linked list is a chunck of data pointing to a pointer
 */
typedef struct list_str
{
	char *str;
	int len;
	struct list_str *next;
}
list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
