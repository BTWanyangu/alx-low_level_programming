#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index index of a listint_t li
 * @head: Pointer to the pointer of the head of the list.
 * @index: Index of the node to delete (starting from 0).
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prev = NULL;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	while (temp != NULL && count < index)
	{
		prev = temp;
		temp = temp->next;
		count++;
	}

	if (temp == NULL)
		return (-1);

	prev->next = temp->next;
	free(temp);

	return (1);
}

