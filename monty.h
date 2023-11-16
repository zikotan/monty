#ifndef MONTY_H
#define MONTY_H

#define _GNU_SOURCE

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct bus_s - bus_s struct
 * @arg: the value
 * @file: the monty file
 * @cont: the line content
 * @lifi: the stack <-> queue
 * Description: it holds values
 */

typedef struct bus_s
{
	char *arg;
	FILE *file;
	char *cont;
	int lifi;
} bus_t;

bus_t bus;

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void push(stack_t **head, unsigned int count);
void pall(stack_t **head, unsigned int count);
void freeStack(stack_t *head);
void addNode(stack_t **head, int n);
void addQueue(stack_t **head, int n);
int execute(char *cont, stack_t **stack, unsigned int count, FILE *file);

#endif
