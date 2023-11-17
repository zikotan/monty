#include "monty.h"

/**
 * _pchar - _pchar func
 * @head: arg1
 * @count: arg2
 * return: nothing
 */
void _pchar(stack_t **head, unsigned int count)
{
	stack_t *_head;

	_head = *head;
	if (!_head)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", count);
		fclose(bus.file);
		free(bus.cont);
		freeStack(*head);
		exit(EXIT_FAILURE);
	}
	if (_head->n > 127 || _head->n <0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", count);
		fclose(bus.file);
		free(bus.cont);
		freeStack(*head);
		exit(EXIT_FAILURE);
        }
	printf("%c\n", _head->n);
}
