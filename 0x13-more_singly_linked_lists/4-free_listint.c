#include "lists.h"

/**
 * free_listint - prints  free lisintt
 * @head: first node
 * Return: none
 */

void free_listint(listint_t *head)
{
	if (head == NULL)
		return;

	free_listint(head->next);
	free(head);
}
