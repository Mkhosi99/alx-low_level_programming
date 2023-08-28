#include "lists.h"

/**
 * sum_listint - Function returns sum of all data points (n) of listint_t list
 * @head_list: Indicates head of the list
 * Return: returns the sum of all (n's)
 */

int sum_listint(listint_t *head_list)
{
	int add = 0;
	listint_t *tempo = head_list;

	while (tempo)
	{
		add += tempo->n;
		tempo = tempo->next;
	}

	return (add);
}
