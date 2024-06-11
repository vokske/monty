#include "monty.h"

/**
 * rotl - Rotates the stack to the top
 * @stack: Pointer to the stack
 * @line_number: Current line being processed
 *
 * @Return: Nothing
 */
void rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = (*stack)->next;
	(void)line_number;

	while (temp->next != NULL)
		temp = temp->next;
	if (temp->next == NULL)
		(*stack)->prev = temp->next;
}
