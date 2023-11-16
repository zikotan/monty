#include "monty.h"

/**
 * freeStack - freeStack func
 * @head: arg
 * return: nothing
 */
void freeStack(stack_t *head)
{
	stack_t *thing;

	thing = head;
	while (head)
	{
		thing = head->next;
		free(head);
		head = thing;
	}
}
