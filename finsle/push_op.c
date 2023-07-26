#include "monty.h"

/**
 * f_push - This function pushes an element on to the stack.
 * @head: the head of the stack.
 * @counter: iterator
 */
void f_push(stack_t **head, unsigned int counter)
{
	int n, t = 0, flag = 0;

	if (doc.arg)
	{
		if (doc.arg[0] == '-')
			t++;
		for (; doc.arg[t] != '\0'; t++)
		{
			if (doc.arg[t] > 57 || doc.arg[t] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(doc.file);
			free(doc.content);
			free_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(doc.file);
		free(doc.content);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	n = atoi(doc.arg);
	if (doc.lifi == 0)
		__addnode(head, n);
	else
		__addqueue(head, n);
}
