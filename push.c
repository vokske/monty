#include "monty.h"

/**
 * push - push an element to the stack
 * @stack: pointer to the stack
 * @line_number: current line number being processed
 * @value: integer to be pushed into the stack
 *
 * Return: Nothing
 */

void push(stack_t **stack, unsigned int line_number, int arg)
{
	stack_t *new_node;
	(void) line_number;
	
	new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
		malloc_error();

	new_node->n = arg;
	new_node->prev = NULL;
	new_node->next = *stack;
	if (*stack != NULL)
		(*stack)->prev = new_node;
	*stack = new_node;
}
