#include "monty.h"

/**
 * nop - Does Nothing
 *
 * @stack: Pointer to the stack
 * @line_number: Current line being processed
 *
 * Return: Nothing
 */
void nop(stack_t **stack, unsigned int line_number)
{
	(void) *stack;
	(void) line_number;

	return;
}
