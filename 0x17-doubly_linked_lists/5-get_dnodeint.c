#include "lists.h"

/**
 * get_dnodeint_at_index - find node of a linked list
 * @head: pointer to the beginning of the list
 * @index: index of the node retrieved
 *
 * Return: points to the index node, or NULL on failure
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	if (index == 0)
		return (head);
	for (i = 0; i < index; i++)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
