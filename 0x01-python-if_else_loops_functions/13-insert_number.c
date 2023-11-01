#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_node - insert node in sorted linked list
 * @head: pointer to pointer of struct listint_t
 * @number: intger
 * Return: address of newnode or NULL if fail
*/
listint_t  *insert_node(listint_t  **head, int number)
{
	listint_t *current, *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = number;
	newnode->next = NULL;

	if (*head == NULL)
		*head = newnode;
	else
	{
		current = *head;
		while (current->next && current->next->n < number)
		{
			current = current->next;
		}
		newnode->next = current->next;
		current->next = newnode;
	}
	return (newnode);
}
