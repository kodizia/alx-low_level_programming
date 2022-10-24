#include "lists.h"
/**
 * free_listint2 - free the linked list
 * @head : pointer to list
 * author : christian joshua
 * date created: 24-10-2022
 * Return: void
 */
void free_listint2(listint_t **head)
{
listint_t *temp;
if (head == NULL)
return;
while (*head)
{
temp = *head;
*head = (*head)->next;
free(temp);
}
head = NULL;
}
