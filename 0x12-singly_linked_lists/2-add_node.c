#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - New node is added at the beginning of a linked list
 * @head: Indicates a double pointer to the list_t list
 * @str: The new string to be added in the node
 *
 * Return: The address of new element, or NULL if failailure
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *nodeNew;
	unsigned int lenth = 0;

	while (str[lenth])
		lenth++;

	nodeNew = malloc(sizeof(list_t));
	if (!nodeNew)
		return (NULL);

	nodeNew->str = strdup(str);
	nodeNew->len = lenth;
	nodeNew->next = (*head);
	(*head) = nodeNew;

	return (*head);
}
