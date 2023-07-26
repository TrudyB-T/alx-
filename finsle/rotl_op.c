#include "monty.h"

/**
 * f_rotl- This code rotates the stack to the top.
 * @head: the head of the stack.
 * @counter: iterator
 */
void f_rotl(stack_t **head,  __attribute__((unused)) unsigned int counter)
{
	stack_t *temp = *head, *ptr;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	ptr = (*head)->next;
	ptr->prev = NULL;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = temp;
	(*head) = ptr;
}
