#include "lists.h"

/**
 * sum_dlistint - sum of data of a dlistint_t linked list
 * @head: points to the beginning of the linked list
 *
 * Return: returns the sum of all data, or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
