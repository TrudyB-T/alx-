#include "monty.h"

/**
 * f_sub - this opcode subtracts the top
 * element of the stack from the second top element of the stack.
 * @head: the head of the stack.
 * @counter: iterator
 */
void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *ptr;
	int s, nodes;

	ptr = *head;
	for (nodes = 0; ptr != NULL; nodes++)
		ptr = ptr->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(doc.file);
		free(doc.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	ptr = *head;
	s = ptr->next->n - ptr->n;
	ptr->next->n = s;
	*head = ptr->next;
	free(ptr);
}
