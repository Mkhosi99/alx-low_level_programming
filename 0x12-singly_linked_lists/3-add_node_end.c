#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - New node is added at the end of a list_t list
 * @head: The double pointer to list
 * @str: String to be added to the new node
 *
 * Return: Address of new element or NULL if failaure
 *
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int lenth = 0;
	list_t *nodeNew;
	list_t *tempo = *head;

	while (str[lenth])
		lenth++;

	nodeNew = malloc(sizeof(list_t));
	if (nodeNew == NULL)
		return (NULL);

	nodeNew->str = strdup(str);
	nodeNew->len = lenth;
	nodeNew->next = NULL;

	if (*head == NULL)
	{
		*head = nodeNew;
		return (nodeNew);
	}

	while (tempo->next != NULL)
		tempo = tempo->next;

	tempo->next = nodeNew;

	return (nodeNew);
}
