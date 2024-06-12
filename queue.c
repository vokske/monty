#include "monty.h"

/**
 * queue_mode - Sets the format of the data to a queue (FIFO)
 * @stack: Pointer to the stack
 * @line_number: Current line being processed
 *
 * Return: Nothing
 */
void queue_mode(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
	is_stack_mode = 0;
}
