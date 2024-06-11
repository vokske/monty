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
	stack_t *temp;
	int hold;

	(void)line_number;
	hold = (*stack)->n;
	temp = *stack;

	while (temp != NULL)
	{
		temp = temp->next;

		if (temp->next == NULL)
		{
			(*stack)->n = temp->n;
			temp->n = hold;
		}
	}
}
