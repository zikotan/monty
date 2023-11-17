#include "monty.h"

/**
 * _pstr - _pstr func
 * @head: arg1
 * @count: arg2
 * return: nothing
 */
void _pstr(stack_t **head, unsigned int count)
{
	stack_t *_head;
	(void)count;

	_head = *head;
	while (_head)
	{
		if (_head->n > 127 || _head->n < 0)
			break;
		printf("%c", _head->n);
		_head = _head->next;
	}
	printf("\n");
}
