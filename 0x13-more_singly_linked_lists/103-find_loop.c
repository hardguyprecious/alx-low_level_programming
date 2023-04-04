#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: head of a list.
 *
 * Return: the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *pro2;
	listint_t *previous;

	pro2 = head;
	previous = head;
	while (head && pro2 && pro2->nextnode)
	{
		head = head->nextnode;
		pro2 = pro2->nextnode->nextnode;

		if (head == pro2)
		{
			head = previous;
			previous =  pro2;
			while (1)
			{
				pro2 = previous;
				while (pro2->nextnode != head && pro2->nextnode != previous)
				{
					pro2 = pro2->nextnode;
				}
				if (pro2->nextnode == head)
					break;

				head = head->nextnode;
			}
			return (pro2->nextnode);
		}
	}

	return (NULL);
}
