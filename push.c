#include "monty.h"

/**
 * push - push an element to the stack
 * @stack: pointer to the stack
 * @line_number: current line number being processed
 * @arg: integer to be pushed into the stack
 *
 * Return: Nothing
 */

void push(stack_t **stack, unsigned int line_number, int arg)
{
	stack_t *new_node, *temp;
	(void) line_number;

	new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
		malloc_error();

	new_node->n = arg;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (is_stack_mode)
	{
		new_node->next = *stack;

		if (*stack != NULL)
		{
			(*stack)->prev = new_node;
		}
		*stack = new_node;
	}
	else
	{
		if (*stack == NULL)
		{
			*stack = new_node;
		}
		temp = *stack;

		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_node;
		new_node->prev = temp;
		new_node->next = NULL;
	}
}
