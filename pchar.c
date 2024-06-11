#include "monty.h"

/**
 * pchar - Prints the character at the top of the stack
 * @stack: Pointer to the stack
 * @line_number: Current line being processed
 *
 * Return: Nothing
 */
void pchar(stack_t **stack, unsigned int line_number)
{
	char value; 
	
	value = (char)((*stack)->n);
	if (*stack == NULL)
		pchar_empty_stack(line_number);
	if ((*stack)->n < 0 || (*stack)->n > 127)
		pchar_not_ascii(line_number);
	printf("%c", value);
}
