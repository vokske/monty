#include "monty.h"

/**
 * stack_mode - Sets the format of the data to a stack (LIFO)
 * @stack: Pointer to the stack
 * @line_number: Current line being processed
 *
 * Return: Nothing
 */

int is_stack_mode = 1;

void stack_mode(stack_t **stack, unsigned int line_number)
{
	(void) *stack;
	(void) line_number;
	is_stack_mode = 1;
}
