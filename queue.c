#include "monty.h"

/**
 * queue -  queue func
 * @head: arg1
 * @count: arg2
 * return: nothing
 */
void queue(stack_t **head, unsigned int count)
{
	bus_t bus = {NULL, NULL, NULL, 0};
	(void)bus;
	(void)head;
	(void)count;
	bus.lifi = 1;
}

/**
 * addQueue -  addQueue func
 * @head: arg1
 * @n: arg2
 * return: nothing
 */
void addQueue(stack_t **head, int n)
{
	stack_t *newNode, *thing;

	thing = *head;
	newNode = malloc(sizeof(stack_t));
	if (newNode == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	newNode->n = n;
	newNode->next = NULL;
	if (thing)
	{
		while (thing->next)
			thing = thing->next;
	}
	if (!thing)
	{
		*head = newNode;
		newNode->prev = NULL;
	}
	else
	{
		thing->next = newNode;
		newNode->prev = thing;
	}
}
