#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a list_t list.
 * @head: Pointer to the head of the list.
 *
 * Description: This function frees all the nodes in a linked list.
 * Each node's string and the node itslf are deallocated to avoid memory leaks.
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}

