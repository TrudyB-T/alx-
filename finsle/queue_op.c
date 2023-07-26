#include "monty.h"

/**
 * f_queue - this opcode formats the data to a queue.
 * @head: the head of the stack
 * @counter: iterator
 */
void f_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	doc.lifi = 1;
}

/**
 * __addqueue - this adds a node to the tail stack.
 * @n: a new value
 * @head: the head of the stack.
 */
void __addqueue(stack_t **head, int n)
{
	stack_t *new_node, *ptr;

	ptr = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (ptr)
	{
		while (ptr->next)
			ptr = ptr->next;
	}
	if (!ptr)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		ptr->next = new_node;
		new_node->prev = ptr;
	}
}
