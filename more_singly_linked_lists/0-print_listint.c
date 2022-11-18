#include "list.h"
/**
 * print_listint - print all the elements of a list
 * @h: pinter head
 *
 * Return: number of elements
 */

size_t print_listint(const listint_t *h)
{
	size_t c = 0;

	for (; h; c++)
		printf("%d\n", h->);
	h = h->next;
}
	return (c);
}
