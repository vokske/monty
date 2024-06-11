#include "monty.h"

/**
 * usage_error - Prints error message to stderr if user doesn't give
 * any file or more than one argument to the program
 *
 * Return: Nothing
 */
void usage_error(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}

/**
 * file_error - Prints error message in stderr if it's not possible
 * to open the file
 * @filename: Name of the file being opened
 *
 * Return: Nothing
 */
void file_error(char *filename)
{
	fprintf(stderr, "Error: Can't open file %s\n", filename);
	exit(EXIT_FAILURE);
}

/**
 * unknown_instruction_error - Prints an error message to stderr
 * if the file contains an invalid instruction
 * @line_number: Current line being processed
 * @opcode: Monty instruction
 *
 * Return: Nothing
 */
void unknown_instruction_error(unsigned int line_number, char *opcode)
{	fprintf(stderr, "L%u: unknown instruction %s\n", line_number, opcode);
	exit(EXIT_FAILURE);
}

/**
 * malloc_error - Prints an error message on stderr if it's
 * not possible to malloc anymore
 *
 * Return: Nothing
 */
void malloc_error(void)
{
	fprintf(stderr, "Error: malloc failed\n");
	exit(EXIT_FAILURE);
}

/**
 * push_usage_error - Prints an error message on stderr if the argument
 * provided for the push function is not an integer
 * or if there's no argument provided
 * @line_number: Current line being processed
 *
 * Return: Nothing
 */
void push_usage_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: usage: push integer\n", line_number);
	exit(EXIT_FAILURE);
}

/**
 * pint_error - Prints an error message to stderr if the stack is empty
 * @line_number: Current line being processed
 *
 * Return: Nothing
 */
void pint_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
	exit(EXIT_FAILURE);
}

/**
 * pop_error: Print an error message to stderr if the stack is empty
 * @line_number: Current line being processed
 *
 * Return: Nothing
 */
void pop_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
	exit(EXIT_FAILURE);
}

/**
 * swap_error - Prints an error message to stderr
 * if the stack contains less than two elements
 * @line_number: Current line being processed
 *
 * Return: Nothing
 */
void swap_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
	exit(EXIT_FAILURE);
}

/**
 * add_error - Print an error message to stderr
 * if the stack contains less than two elements
 * @line_number: Current line being processed
 *
 * Return: Nothing
 */
void add_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
	exit(EXIT_FAILURE);
}

/**
 * sub_error - Prints an error message to stderr
 * if the stack contains less than two elements
 * @line_number: Current line being processed
 *
 * @Return: Nothing
 */
void sub_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: can't sub, stack too short\n", line_number);
	exit(EXIT_FAILURE);
}

/**
 * div_error - Prints an error message to stderr
 * if the stack contains less than two elements
 * @line_number: Current line being processed
 *
 * Return: Nothing
 */
void div_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: can't div, stack too short", line_number);
	exit(EXIT_FAILURE);
}

/**
 * zero_div_error - Prints an error message to stderr if
 * the top element of the stack is zero
 * @line_number: Current line being processed
 *
 * Return: Nothing
 */
void zero_div_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: division by zero", line_number);
	exit(EXIT_FAILURE);
}
