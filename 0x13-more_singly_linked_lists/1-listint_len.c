#include "lists.h"

/**
 * listint_len - function that  counts the number of nodes in a linked list
 * @h: head of the list
 * author: christian joshua
 * date created: 24-10-2022
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *cursor = h;
	size_t count = 0;

	while (cursor != NULL)
	{
		count += 1;
		cursor = cursor->next;
	}
	return (count);
}
