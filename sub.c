#include "monty.h"

/**
 * sub - Subtracts the top element of the stack from the
 * second top element of the stack
 * @stack: Pointer to the stack
 * @line_number: Current line being processed
 *
 * Return: Nothing
 */
void sub(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (*stack == NULL || (*stack)->next == NULL)
		sub_error(line_number);

	temp = *stack;
	temp->next->n -= temp->n;
	*stack = temp->next;
	(*stack)->prev = NULL;
	free(temp);
}
