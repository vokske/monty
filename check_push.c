#include "monty.h"

void check_push(stack_t **stack, char *arg, unsigned int line_number)
{
	int i;

	if (arg == NULL || (*arg != '-' && !isdigit(*arg)))
	{
		push_usage_error(line_number);
	}
	for (i = 1; arg[i] != '\0'; i++)
	{
		if (!isdigit(arg[i]))
		{
			push_usage_error(line_number);
		}
	}
	push(stack, line_number, atoi(arg));
}
