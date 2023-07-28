#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - adds node at beginning of List
 * @head: original start of list
 * @str: string to add to node
 * Return: adress of new list and null if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int length = 0;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	while (str[length])
		length++;

	temp->len = length;
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;
	return (temp);
}

