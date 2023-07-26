#include "monty.h"

/**
 * f_pop - This function removes an element from the top of the stack.
 * @head: the head of the stack.
 * @counter: iterator
 */
void f_pop(stack_t **head, unsigned int counter)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(doc.file);
		free(doc.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}
