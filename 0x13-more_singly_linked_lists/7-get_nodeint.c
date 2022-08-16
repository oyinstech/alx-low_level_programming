#include "lists.h"

/**
 * get_nodeint_at_index - Locates a given node of a listint_t linked list
 * @head: pointer to the start of linked list
 * @index: index of the node to return
 * Return: If the node does not exist - NULL
 */
 listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; head; i++, head = (*head).next)
		if (i == index)
			return (head);
	return (NULL);
}
