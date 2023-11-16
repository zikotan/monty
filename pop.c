#include "monty.h"

/**
 * pop - pop func
 * @head: arg1
 * @count: arg2
 * return: nothing
 */
void pop(stack_t **head, unsigned int count)
{
	stack_t *_head;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", count);
		fclose(bus.file);
		free(bus.cont);
		freeStack(*head);
		exit(EXIT_FAILURE);
	}
	_head = *head;
	*head = _head->next;
	free(_head);
}
