#include "monty.h"

void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *top;
	int temp;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		swap_error(line_number);
	}

	top = *stack;
	temp = top->n;
	top->n = top->next->n;
	top->next->n = temp;
}
