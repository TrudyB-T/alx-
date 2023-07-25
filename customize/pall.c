#include "monty.h"
/**
 * f_pall - prints the stack
 * @head: stack head
 * @counter: no used
 * Return: no return
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *g;
	(void)counter;

	g = *head;
	if (g == NULL)
		return;

	while (g)
	{
		printf("%d\n", g->n);
		g = g->next;
	}
}
