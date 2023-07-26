#include "monty.h"

/**
 * __addnode - adds node to the head
 * @head: pointer to the head
 * @n: data
 */

void __addnode(stack_t **head, int n)
{

	stack_t *newnode, *ptr;

	ptr = *head;
	newnode = malloc(sizeof(stack_t));
	if (newnode == NULL)
	{ printf("Error\n");
		exit(0); }
	if (ptr)
		ptr->prev = newnode;
	newnode->n = n;
	newnode->next = *head;
	newnode->prev = NULL;
	*head = newnode;
}
