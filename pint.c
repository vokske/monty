#include "monty.h"

void pint(stack_t **stack, unsigned int line_number)
{
	stack_t *head;
	head = *stack;
	(void) line_number;

	if (head == NULL)
	{
		pint_error(line_number);
	}
	printf("%d\n", head->n);
}
