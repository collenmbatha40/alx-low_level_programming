#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: head of the list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *pointr = h;
	size_t num = 0;

	while (pointr != NULL)
	{
		printf("%d\n", pointr->n);
		num += 1;
		pointr = pointr->next;
	}
	return (num);
}
