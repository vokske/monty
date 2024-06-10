#include "monty.h"

/**
 * main - Initialize program and execute Monty bytecode instructions
 * @argc: Number of arguments to the program
 * @argv: Specific command line argument
 *
 * Return: Always 0 (successful)
 */
int main(int argc, char *argv[])
{
	FILE *file;
	char *line = NULL;
	size_t len = 0;
	ssize_t read;
	unsigned int line_number = 0;
	stack_t *stack = NULL;
	char *opcode, *arg;

	if (argc != 2)
		usage_error();
	file = fopen(argv[1], "r");

	if (file == NULL)
		file_error(argv[1]);
	while ((read = getline(&line, &len, file)) != -1)
	{
		line_number++;
		opcode = strtok(line, " \n\t");
		if (opcode == NULL || opcode[0] == '#')
		{
			continue;
		}
		if (strcmp(opcode, "push") == 0)
		{
			arg = strtok(NULL, " \n\t");
			check_push(&stack, arg, line_number);
		}
		else
		{
			execute_instruction(opcode, &stack, line_number);
		}
	}
	free(line);
	fclose(file);
	free_stack(stack);
	return (0);
}
