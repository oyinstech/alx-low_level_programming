#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list
 * @head: pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (head && *head)
	{
		temp = *head;
		*head = (**head).next;
		free(temp);
	}
}
