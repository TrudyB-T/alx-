#include "monty.h"
/**
* execute - executes the opcode
* @stack: head linked list - stack
* @counter: line_counter
* @file: poiner to monty file
* @content: line content
* Return: no return
*/
int _exec(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
	instruction_t ops[] = {
				{"push", f_push}, {"pall", f_pall}, {"pint", f_pint}

				};
	
	char *operation = strtok(content, " \n\t");
	unsigned int g = 0;

	doc.arg = strtok(NULL, " \n\t");
	while (ops[g].opcode && operation)
	{
		if (strcmp(operation, ops[g].opcode) == 0)
		{	ops[g].f(stack, counter);
			return (0);
		}
		g++;
	}
	if (operation && ops[g].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", counter, operation);
		fclose(file);
		free(content);
		free_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
