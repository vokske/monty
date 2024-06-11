#include "monty.h"

/**
 * mod - Computes the rest of the division of thesecond top element
 * of the stack by the top element of the stack
 * @stack: Pointer to the stack
 * @line_number: Current line being processed
 *
 * Return: Nothing
 */
void mod(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (*stack == NULL || (*stack)->next == NULL)
		div_error(line_number);
	if ((*stack)->n == 0)
		zero_div_error(line_number);
	temp = *stack;
	temp->next->n %= temp->n;
	*stack = temp->next;
	(*stack)->prev = NULL;
	free(temp);
}
