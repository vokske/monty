#include "monty.h"

/**
 * free_stack - Frees the stack
 * @stack: Point to the stack
 *
 * Return: Nothing
 */
void free_stack(stack_t *stack)
{
	stack_t *temp;

	while (stack != NULL)
	{
		temp = stack;
		stack = stack->next;
		free(temp);
	}
}
