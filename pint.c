#include "monty.h"

/**
 * pint - pint func
 * @head: arg1
 * @count: arg2
 * return: nothing
 */
void pint(stack_t **head, unsigned int count)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", count);
		fclose(bus.file);
		free(bus.cont);
		freeStack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
