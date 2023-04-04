#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * of a linked list.
 * @head: head of a list.
 * @index: index of the list where the node is
 * deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *previous;
	listint_t *nextnode;

	previous = *head;

	if (index != 0)
	{
		for (i = 0; i < index - 1 && previous != NULL; i++)
		{
			previous = previous->nextnode;
		}
	}

	if (previous == NULL || (previous->nextnode == NULL && index != 0))
	{
		return (-1);
	}

	nextnode = previous->nextnode;

	if (index != 0)
	{
		previous->nextnode = nextnode->nextnode;
		free(nextnode);
	}
	else
	{
		free(previous);
		*head = nextnode;
	}

	return (1);
}
