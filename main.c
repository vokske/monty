#include "monty.h"

/**
 * main - Initialize program and execute Monty bytecode instructions
 * @argc: Number of arguments to the program
 * @argv: Specific command line argument
 *
 * Return: Always 0 (successful)
 */
extern int push_arg;

int main(int argc, char *argv[])
{
	FILE *file;
	char *line = NULL;
	size_t len = 0;
	ssize_t read;
	unsigned int line_number = 0;
	stack_t *stack = NULL;
	char *opcode;
	char *arg;

	if (argc != 2)
		usage_error();

	file = fopen(argv[1], "r");
	if (file == NULL)
		file_error(argv[1]);

	while((read = getline(&line, &len, file)) != -1)
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
			if (arg == NULL || !isdigit(arg[0]))
			{
				push_usage_error(line_number);
			}
			push(&stack, line_number, atoi(arg));
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
