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
	stack_t *bottom, *second_bottom;

	(void) line_number;

	if (*stack == NULL || (*stack)->next == NULL)
		return;

	bottom = *stack;

	while (bottom->next != NULL)
		bottom = bottom->next;

	second_bottom = bottom->prev;
	second_bottom->next = NULL;
	bottom->next = *stack;
	bottom->prev = NULL;
	bottom = (*stack)->prev;
	*stack = bottom;
}
