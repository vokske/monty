#include "monty.h"

/**
 * pstr - Prints the string starting at the top of the stack
 * @stack: Pointer to the stack
 * @line_number: Current line being processed
 *
 * Return: Nothing
 */
void pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;

	(void) line_number;

	if (current == NULL)
		printf("\n");

	while (current != NULL)
	{
		if (current->n == 0 || !isascii(current->n))
			break;
		putchar(current->n);
		current = current->next;
	}
	putchar('\n');
}
