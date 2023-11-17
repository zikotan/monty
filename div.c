#include "monty.h"

/**
 * _div - _div func
 * @head: arg1
 * @count: arg2
 * return: nothing
 */
void _div(stack_t **head, unsigned int count)
{
	stack_t *_head;
	int length = 0, thing;

	_head = *head;
	while (_head)
	{
		_head = _head->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", count);
		fclose(bus.file);
		free(bus.cont);
		freeStack(*head);
		exit(EXIT_FAILURE);
	}
	_head = *head;
	if (_head->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", count);
		fclose(bus.file);
		free(bus.cont);
		freeStack(*head);
		exit(EXIT_FAILURE);
	}
	thing = _head->next->n / _head->n;
	_head->next->n = thing;
	*head = _head->next;
	free(_head);
}
