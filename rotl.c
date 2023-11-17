#include "monty.h"

/**
 * _rotl - _rotl func
 * @head: arg1
 * @count: arg2
 * return: nothing
 */
void _rotl(stack_t **head, __attribute__((unused)) unsigned int count)
{
	stack_t *help = *head, *thing;

	if (*head == NULL || (*head)->next == NULL)
		return;
	thing = (*head)->next;
	thing->prev = NULL;
	while (help->next != NULL)
		help = help->next;
	help->next = *head;
	(*head)->next = NULL;
	(*head)->prev = help;
	(*head) = thing;
}
