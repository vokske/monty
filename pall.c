#include "monty.h"

/**
 * pall - Prints all the values on the stack
 * @stack: stack to be printed
 * @line_number: current line being processed
 *
 * Return: Nothing
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;
	(void) line_number;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
