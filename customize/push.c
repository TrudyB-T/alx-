#include "monty.h"
/**
 * f_push - add node to the stack
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_push(stack_t **head, unsigned int counter)
{
	int o, k = 0, flag = 0;

	if (doc.arg)
	{
		if (doc.arg[0] == '-')
			k++;
		for (; doc.arg[k] != '\0'; k++)
		{
			if (doc.arg[k] > 57 || doc.arg[k] < 48)
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
	o = atoi(doc.arg);
	if (doc.lifi == 0)
		__addnode(head, o);
	else
		__addqueue(head, o);
}
