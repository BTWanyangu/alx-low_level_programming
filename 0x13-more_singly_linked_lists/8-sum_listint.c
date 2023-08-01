#include <stddef.h>
#include "lists.h"

/**
 * sum_listint - Returns sum of all the data (n) of a listint_t linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: sum  all the data n in the linked list, or 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

