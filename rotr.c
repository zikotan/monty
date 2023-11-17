#include "monty.h"

/**
 * _rotr - _rotr func
 * @head: arg1
 * @count: arg2
 * return: nothing
 */
void _rotr(stack_t **head, __attribute__((unused)) unsigned int count)
{
	stack_t *cp;

	*cp = *head;
	if (*head == NULL || (*head)->next == NULL)
		return;
	while (cp->next)
		cp = cp->next;
	cp->next = *head;
	cp->prev->next = NULL;
	cp->prev = NULL;
	(*head)->next = NULL;
	(*head)->prev = cp;
	(*head) = cp;
}
