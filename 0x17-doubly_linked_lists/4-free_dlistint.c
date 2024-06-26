#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - dlistint_t list
 * @head: points to the beginning of the linked list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
