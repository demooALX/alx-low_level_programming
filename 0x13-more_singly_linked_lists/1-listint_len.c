#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked lists
 * @p: linked list of type listint_t to traverse
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *p)
{
	size_t num = 0;

	while (p)
	{
		num++;
		p = p->next;
	}

	return (num);
}

