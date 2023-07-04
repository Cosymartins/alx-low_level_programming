#include "lists.h"

/**
 * listint_len - it returns the no of elements in a linked list
 * @h: linkd  list of type 'listint_t' to travers3
 * Return: no. of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}

