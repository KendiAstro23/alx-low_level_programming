#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * add_nodeint_end - adds node at the end
 * @head: beginning of node
 * @n: integer
 * Return: address of NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		listint_t *temp = *head;

		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = new_node;
	}
	return (new_node);
}
