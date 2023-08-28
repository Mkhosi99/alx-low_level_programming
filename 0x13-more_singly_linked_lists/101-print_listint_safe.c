#include "lists.h"

/**
 * add_up_nodes - Determines number of unique nodes in looped listint_t list
 * @head: Points to head of list
 *
 * Return: Number of unique nodes in list or zero otherwise
 */

size_t add_up_nodes(const listint_t *head)
{
	const listint_t *present = head;
	const listint_t *mover = head;
	size_t ndes = 0;

	if (head == NULL)
		return (0);

	while (mover && mover->next)
	{
		present = present->next;
		mover = mover->next->next;

		if (present == mover)
		{
			mover = head;
			while (present != mover)
			{
				ndes++;
				present = present->next;
				mover = mover->next;
			}

			do

			{
				ndes++;
				mover = mover->next;
			} while (present != mover);

			return (ndes);
		}
	}

	return (ndes);
}

/**
 * print_listint_safe - Prints a listint list
 * @head: Points to the head of list
 *
 * Return: Number of nodes in list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t ndes = 0;
	size_t loop_len = add_up_nodes(head);

	while (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		ndes++;

		if (loop_len && ndes == loop_len)
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}

		head = head->next;
	}

	return (ndes);
}
