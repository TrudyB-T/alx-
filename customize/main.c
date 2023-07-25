#include "monty.h"
#include <stdio.h>

doc_t doc = {NULL, NULL, NULL, 0};

int main(int argc, char *arv[])
{
	FILE *file = fopen(arv[1], "r");
	char *content;
	ssize_t line = 1;
	size_t size = 0;
	stack_t *stack = NULL;
	unsigned int counter = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	doc.file = file;
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", arv[1]);
		exit(EXIT_FAILURE);
	}
	while (line > 0)
	{
		content = NULL;
		line = getline(&content, &size, file);
		doc.content = content;
		counter++;
		if (line > 0)
		{
			_exec(content, &stack, counter, file);
		}
		free(content);
	}
	free_stack(stack);
	fclose(file);
return (0);
}
