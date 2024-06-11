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
	char string[100];
	char value;
	int i = 0;
	(void) line_number;

	if (current == NULL)
		printf("\n");

	while (current != NULL)
	{
		if (current->n <= 0 || current->n > 127 )
			break;
		value = (char)(current->n);
		string[i++] = value;
		current = current->next;
	}
	string[i] = '\0';
	printf("%s\n", string);
}
