#include "lists.h"

/**
 * listint_len - Returna the number of the elements of a listint_t list
 * @h: linked list of type listint_t to traverse
 * Return: The number of elements in the list_t list
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
