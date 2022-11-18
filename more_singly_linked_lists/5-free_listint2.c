#include "lists.h"

/**
* free_listint - free list
*
*@head: pointer to first node
*/

void free_listint(listint_t *head)
{
	if (head)
	{
		free_listint(head->next);
		free(head);
	}
}
