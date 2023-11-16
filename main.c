#include "monty.h"
/**
 * main - main func
 * @argc: arg1
 * @argv: arg2
 *
 * Return: integer
 */
int main(int argc, char *argv[])
{
	FILE *file;
	char *cont;
	size_t size = 0;
	ssize_t readLine = 1;
	stack_t *stack = NULL;
	unsigned int count = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	bus.file = file;
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (readLine > 0)
	{
		cont = NULL;
		readLine = getline(&cont, &size, file);
		bus.cont = cont;
		count++;
		if (readLine > 0)
			execute(cont, &stack, count, file);
		free(cont);
	}
	freeStack(stack);
	fclose(file);
	return (0);
}
