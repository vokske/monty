#ifndef MONTY_H
#define MONTY_H

#define _GNU_SOURCE
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <unistd.h>


/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

extern int is_stack_mode;

void push(stack_t **stack, unsigned int line_number, int arg);
void pall(stack_t **stack, unsigned int line_number);
void free_stack(stack_t *stack);
void usage_error(void);
void malloc_error(void);
void file_error(char *filename);
void unknown_instruction_error(unsigned int line_number, char *opcode);
void push_usage_error(unsigned int line_number);
void execute_instruction(char *opcode, stack_t **stack,
			 unsigned int line_number);
void check_push(stack_t **stack, char *arg, unsigned int line_number);
void pint_error(unsigned int line_number);
void pint(stack_t **stack, unsigned int line_number);
void pop_error(unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);
void swap_error(unsigned int line_number);
void swap(stack_t **stack, unsigned int line_number);
void add_error(unsigned int line_number);
void add(stack_t **stack, unsigned int line_number);
void nop(stack_t **stack, unsigned int line_number);
void sub_error(unsigned int line_number);
void sub(stack_t **stack, unsigned int line_number);
void div_error(unsigned int line_number);
void zero_div_error(unsigned int line_number);
void div_op(stack_t **stack, unsigned int line_number);
void mul(stack_t **stack, unsigned int line_number);
void mul_error(unsigned int line_number);
void mod_error(unsigned int line_number);
void mod(stack_t **stack, unsigned int line_number);
void pchar(stack_t **stack, unsigned int line_number);
void pchar_empty_stack(unsigned int line_number);
void pchar_not_ascii(unsigned int line_number);
void pstr(stack_t **stack, unsigned int line_number);
void rotl(stack_t **stack, unsigned int line_number);
void rotr(stack_t **stack, unsigned int line_number);
void stack_mode(stack_t **stack, unsigned int line_number);
void queue_mode(stack_t **stack, unsigned int line_number);
#endif
