#include "monty.h"

/**
 * f_swap - This function swaps the top two elements of the stack.
 * @head: the  head of the stack
 * @counter: iterator
 */
void f_swap(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int len = 0, ptr;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(doc.file);
		free(doc.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	ptr = h->n;
	h->n = h->next->n;
	h->next->n = ptr;
}
