#include "monty.h"

void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	 if (*stack == NULL)
		 pop_error(line_number);

	temp = *stack;
	*stack = (*stack)->next;
	if (*stack != NULL)
		(*stack)->prev = NULL;
	free(temp);
}
