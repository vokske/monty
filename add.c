#include "monty.h"

/**
 * add - Adds the top two elements of the stack
 * @stack: Pointer to the top of the stack
 * @line_number: Current line being processed
 *
 * Return: Nothing
 */
void add(stack_t **stack, unsigned int line_number)
{
	stack_t *top;
	int temp;

	if (*stack == NULL || (*stack)->next == NULL)
		add_error(line_number);
	
	top = *stack;
	temp = top->n + top->next->n;
	top->next->n = temp;
	*stack = top->next;
	(*stack)->prev = NULL;
	free(top);
}
