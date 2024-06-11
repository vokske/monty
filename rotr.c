#include "monty.h"

/**
 * rotr - Rotates the stack to the bottom
 * @stack: Pointer to the stack
 * @line_number: Current line being processed
 *
 * Return: Nothing
 */
void rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *top, *bottom;

	top = *stack;
	bottom = *stack;

	(void) line_number;

	if (top == NULL || top->next == NULL)
		return;

	while (bottom->next != NULL)
		bottom = bottom->next;

	bottom->prev = *stack;
	(*stack)->prev = NULL;
	(*stack)->next = bottom;
	bottom->next = top->prev;
}
