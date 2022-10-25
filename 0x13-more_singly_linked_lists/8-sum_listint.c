#include "lists.h"
/**
 * sum_listint - calculates the sum of all the data in a list
 * @head: pointer to beginning of list
 * Return: sum of list
 */
int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
