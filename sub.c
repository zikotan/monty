#include "monty.h"

/**
 * _sub - _sub func
 * @head: arg1
 * @count: arg2
 * return: nothing
 */
void _sub(stack_t **head, unsigned int count)
{
	stack_t *thing;
	int sustract, nds;

	thing = *head;
	for (nds = 0; thing != NULL; nds++)
		thing = thing->next;
	if (nds < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", count);
		fclose(bus.file);
		free(bus.cont);
		freeStack(*head);
		exit(EXIT_FAILURE);
	}
	thing = *head;
	sustract = thing->next->n - thing->n;
	thing->next->n = sustract;
	*head = thing->next;
	free(thing);
}
