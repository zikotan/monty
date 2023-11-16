#include "monty.h"

/**
 * execute - execute func
 * @cont: arg1
 * @stack: arg2
 * @count: arg3
 * @file: arg4
 *
 * Return: integer
 */
int execute(char *cont, stack_t **stack, unsigned int count, FILE *file)
{
	instruction_t exec[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{NULL, NULL}
	};
	unsigned int i = 0;
	char *oper;

	oper = strtok(cont, " \n\t");
	if (oper && oper[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (exec[i].opcode && oper)
	{
		if (strcmp(oper, exec[i].opcode) == 0)
		{
			exec[i].f(stack, count);
			return (0);
		}
		i++;
	}
	if (oper && exec[i].opcode == NULL)
	{
		fprintf(stderr, "L%d: unkown instruction %s\n", count, oper);
		fclose(file);
		free(cont);
		freeStack(*stack);
		exit(EXIT_FAILURE);
	}
	return (1);
}
