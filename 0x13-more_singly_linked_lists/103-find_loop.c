#include "lists.h"

/**
 * find_listint_loop - Function finds loop in linked list
 * @head: Points to head of list
 *
 * Return: Address of node where loop starts,
 *         or null if no loop is present
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *lag_ptr = head;
	listint_t *quick_ptr = head;

	if (head == NULL)
		return (NULL);

	while (lag_ptr && quick_ptr && quick_ptr->next)
	{
		quick_ptr = quick_ptr->next->next;
		lag_ptr = lag_ptr->next;

		if (quick_ptr == lag_ptr)
		{
			lag_ptr = head;

			while (lag_ptr != quick_ptr)
			{
				lag_ptr = lag_ptr->next;
				quick_ptr = quick_ptr->next;
			}

			return (quick_ptr);
		}
	}

	return (NULL);
}
