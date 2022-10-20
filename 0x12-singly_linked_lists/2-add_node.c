#include "lists.h"
/**
 * add_node - adds a new node at beginning of list
 * @head: beginning of list_t
 * @str: string to be added
 * Return: address of added element.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t num;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->str = strdup(str);

	for (num = 0; str[num])
	{
		num++;
	}

	new->len = num;
	new->next = *head;
	*head = new;

	return (*head);
}
