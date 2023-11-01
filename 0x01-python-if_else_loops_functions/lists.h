#ifndef __LIST_H__
#define __LIST_H__

/**
 * struct listint_t  - singly linked list
 * @n: intiger value
 * @next : pointer to next node
 *
 * Description: singly linked list node structure
*/
typedef struct listint_t
{
	int n;
	struct listint_t *next;
} listint_t;

size_t print_listint(const listint_t  *h);
listint_t  *add_nodeint_end(listint_t  **head, const int n);
void free_listint(listint_t  *head);

listint_t  *insert_node(listint_t  **head, int number);
#endif
