#include <stdlib.h>
#include "lists.h"
#define None 0LL
static unsigned int compare(listint_t **head, unsigned int len);

/**
 * is_palindrome - check if linked list is palindrome
 * @head: pointer to pointer of struct
 * Return: 1 if palindrome 0 if Not.
*/
int is_palindrome(listint_t **head)
{
	listint_t *current;
	unsigned int len = 0, is_palindrome = 1;

	if (head == None)
		return (0);

	current = *head;
	/* Caculate length of linked list */
	while (current)
	{
		len++;
		current = current->next;
	}
	if (len == 0)
		return (1);
	/* if length is odd number that mean it not palindrome (Expect) */
	if (len % 2 == 1)
		return (0);
	is_palindrome = compare(head,  len);

	return (is_palindrome);
}

/**
 * compare - the completness of is_palindrome function (Created for readabiity)
 * @head: pointer to pointer of struct
 * @len: length of linked list
 * Return: 1 if palindrome 0 if Not.
*/
static unsigned int compare(listint_t **head, unsigned int len)
{
	listint_t *current;
	unsigned int half, is_palindrome = 1, i = 0;
	int *arr1, *arr2;

	half = len / 2;
	current = *head;
	arr1 = (int *)malloc(half * sizeof(int));
	arr2 = (int *)malloc(half * sizeof(int));
	/* Divide linked list into two arrays */
	while (current)
	{
		if (i < half)
			arr1[i] = current->n;
		else
			arr2[i - half] = current->n;
		current = current->next;
		i++;
	}

	i = 0;
	/* Compare the two arrays */
	while (i < half)
	{
		/**
		 * half - 1 -i => (half) is half number of elements in linked list
		 * so (last index) => is (half - 1)
		 * (half - 1 -i) => to reverse indexing
		 */
		if (arr1[half - 1 - i] == arr2[i])
			is_palindrome &= 1;
		else
			is_palindrome &= 0;
		i++;
	}
	/* Free mallocated arrays */
	free(arr1);
	free(arr2);
	return (is_palindrome);
}
