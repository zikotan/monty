#include "monty.h"

/**
 * addNode - addNode func
 * @head: arg1
 * @n: arg2
 * return: nothing
 */
void addNode(stack_t **head, int n)
{
	stack_t *newNode, *thing;

	thing = *head;
	newNode = malloc(sizeof(stack_t));
	if (newNode == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	if (thing)
		thing->prev = newNode;
	newNode->n = n;
	newNode->next = *head;
	newNode->prev = NULL;
	*head = newNode;
}
