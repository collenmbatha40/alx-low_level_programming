#include "lists.h"

/**
 * add_node_end - adds new node at tail of list_t
 * @head: beginning of list_t
 * @str: string to be added
 * Return: address of new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node_2, *node_1;
	size_t num;

	node_2 = malloc(sizeof(list_t));
	if (node_2 == NULL)
	{
		return (NULL);
	}

	node_2->str = strdup(str);

	for (num = 0; str[num]; num++)
	{
		;
	}
	node_2->len = num;
	node_2->next = NULL;
	node_1 = *head;

	if (node_2 == NULL)
	{
		*head = node_1;
	}
	else
	{
		while (node_1->next != NULL)
		{
			node_1 = node_1->next;
		}
		node_1->next = node_2;
	}

	return (*head);
}
