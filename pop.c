#include "monty.h"

void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp, *head;
	(void) line_number;

	head = *stack;
	if (head == NULL)
		pop_error(line_number);
	if (head->next == NULL)
	{
		temp = head;
		free(temp);
	}
	temp = head->next->prev;
	head = temp;
	free(temp);
}
