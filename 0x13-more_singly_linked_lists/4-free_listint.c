#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: A pointer to the head of the listint_t list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
