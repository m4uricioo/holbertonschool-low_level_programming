#include "lists.h"

/**
  * free_dlistint - frees a listint_t list.
  * @head: The head node of the list.
  *
  */

void free_dlistint(dlistint_t *head)
{
	if (head)
	{
		free_dlistint(head->next);
		free(head);
	}
}
Footer
© 2022 GitHub, Inc.
