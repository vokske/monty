#include "monty.h"

/**
 * mul - Multiplies the second top element of the stack
 * with the top element of the stack
 * @stack: Pointer to the stack
 * @line_number: Current line being processed
 *
 * Return: Nothing
 */
void mul(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (*stack == NULL || (*stack)->next == NULL)
		mul_error(line_number);
	temp = *stack;
	temp->next->n *= temp->n;
	*stack = temp->next;
	(*stack)->prev = NULL;
	free(temp);
}
