#include "lists.h"

/**
 * add_node_end - adds new node at tail of list_t
 * @head: beginning of list_t
 * @str: string to be added
 * Return: address of new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *str2;
	int num;
	list_t *new, *tail;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}

	str2 = strdup(str);
	if (str2 == NULL)
	{
		free(new);
		return (NULL);
	}

	for (num = 0; str[num]; num++)
	{
		;
	}
	new->str = str2;
	new->len = num;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		tail = *head;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = new;
	}
	return (*head);
}
