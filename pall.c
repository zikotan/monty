#include "monty.h"

/**
 * pall - pall func
 * @head: arg1
 * @count: arg2
 * return: nothing
 */
void pall(stack_t **head, unsigned int count)
{
	stack_t *_head;
	(void)count;

	_head = *head;
	if (_head == NULL)
		return;
	while (_head)
	{
		printf("%d\n", _head->n);
		_head = _head->next;
	}
}
