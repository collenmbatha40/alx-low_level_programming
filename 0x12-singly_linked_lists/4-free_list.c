#include <stdlib.h>
#include "lists.h"
/**
 * free_list - frees a list_t list
 * @head: beginning of list_t
 */
void free_list(list_t *head)
{
	list_t *list_b;

	while (head)
	{
		list_b = head->next;
		free(head->str);
		free(head);
		head = list_b;
	}
}
