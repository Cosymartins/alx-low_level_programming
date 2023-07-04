#include "lists.h"

/**
 * get_nodeint_at_index -returns th3 node at a certain index in a linked list
 * @head: 1st node in the linked l!st
 * @index: index of node to return.
 * Return: pointer to the node we are looking for , or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}

