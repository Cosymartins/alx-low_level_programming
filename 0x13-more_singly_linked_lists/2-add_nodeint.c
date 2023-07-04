#include "lists.h"

/**
 * add_nodeint - it adds a neww node at the beginning of a linked list
 * @head: a pointer to the 1st node in the list
 * @n: data to be inserted in that new node
 * Return: a poin_ter To the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}

