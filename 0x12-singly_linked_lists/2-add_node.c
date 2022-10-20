#include <string.h>
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
	int num;
	char *str2;

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
	for (num = 0; str[num])
	{
		num++;
	}
	new->str = str2;
	new->len = num;
	new->next = *head;
	*head = new;

	return (new);
}
