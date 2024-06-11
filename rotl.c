#include "monty.h"

/**
 * rotl - Rotates the stack to the top
 * @stack: Pointer to the stack
 * @line_number: Current line being processed
 *
 * @Return: Nothing
 */
void rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *top, *bottom;

	(void) line_number;
	top = *stack;
	bottom = *stack;

	if (top == NULL || top->next == NULL)
		return;

	while (bottom->next != NULL)
	{
		bottom = bottom->next;
	}

	*stack = top->next;
	(*stack)->prev = NULL;
	bottom->next = top;
	top->next = NULL;
	top->prev = bottom;
}
