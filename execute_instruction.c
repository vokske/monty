#include "monty.h"

/**
 * execute_instruction - Finds the correct function
 * for the given opcode and executes it
 * @opcode: the name of the opcode
 * @stack: the stack to which an operation will be performed
 * @line_number: the current line number being processed
 *
 * Return: Nothing
 */

void execute_instruction(char *opcode, stack_t **stack,
			 unsigned int line_number)
{
	instruction_t instructions[] = {
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{"sub", sub},
		{"div", div_op},
		{"mul", mul},
		{"mod", mod},
		{NULL, NULL}
	};

	unsigned int i = 0;

	while (instructions[i].opcode != NULL)
	{
		if (strcmp(opcode, instructions[i].opcode) == 0)
		{
			instructions[i].f(stack, line_number);
			return;
		}
		i++;
	}
	unknown_instruction_error(line_number, opcode);
}
