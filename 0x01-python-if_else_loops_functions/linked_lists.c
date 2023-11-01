#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - print linked list
 * @h: head of linked list which is a pointer
 * Return: Number of elements
*/
size_t print_listint(const listint_t  *h)
{
	const listint_t *temp = h;
	unsigned int n = 0;

	while (temp)
	{
		printf("%i\n", temp->n);
		n++;
		temp = temp->next;
	}
	return (n);
}
/**
 * add_nodeint_end - append node to linked list
 * @head: pointer to pointer which is the head of linked list
 * @n: intger
 * Return: address of newnode
*/
listint_t  *add_nodeint_end(listint_t  **head, const int n)
{
	listint_t *newnode, *current;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
		*head = newnode;
	else
	{
		current = *head;
		while (current->next)
		{
			current = current->next;
		}
		current->next = newnode;
	}
	return (newnode);
}
/**
 * free_listint - clear/free linked list from memory
 * @head: head of linked list which is a pointer
 * Return: void
*/
void free_listint(listint_t  *head)
{
	listint_t *current = head, *brevious;

	while (current->next)
	{
		brevious = current->next;
		free(current);
		current = brevious;
	}
	if (current != NULL)
		free(current);
	head = NULL;
}
