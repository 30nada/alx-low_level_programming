#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t
 * @head: pointer to structure
 * @str: string
 * Return: the address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	size_t i;

newnode = malloc(sizeof(list_t));
if (newnode == NULL)
{
	free(newnode);
	return (NULL);
}
newnode->str = strdup(str);
for (i = 0; str[i]; i++);
newnode->len = i;
newnode->next = *head;
return (*head);
}
