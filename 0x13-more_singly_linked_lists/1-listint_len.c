#include "lists.h"

/**
 * listint_len - count the number of elements in a linked listint_t list
 * @h: head of the list
 * Return: the number of elements in listint_t
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num ++;
		h = h->next;
	}
	return (num);
}
