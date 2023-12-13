#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <stdarg.h>

/**
* struct stack_s - doubly linked list representation of a stack (or queue)
* @n: integer
* @prev: points to the previous element of the stack (or queue)
* @next: points to the next element of the stack (or queue)
*
* Description: doubly linked list node structure
* for stack, queues, LIFO, FIFO
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
* Description: opcode and its function
* for stack, queues, LIFO, FIFO
*/
typedef struct instruction_s
{
	char *opcode;

	void (*f)(stack_t **stack, unsigned int line_number);

} instruction_t;
/**
* struct global_s - global variable
* @value: value to push
* Description: global variable
*/
typedef struct global_s
{
		int value;

} global_t;
extern global_t var_global;
global_t var_global;

void (*get_op_func(char *s))(stack_t **stack, unsigned int line_number);

ssize_t getline(char **line, size_t *size, FILE *stream);

int is_number(char *s);

void read_file(char *file_name, stack_t **stack);

void push(stack_t **stack, unsigned int line_number);

void pall(stack_t **stack, unsigned int line_number);

typedef void (*instruct_func)(stack_t **stack, unsigned int line_number);
instruct_func get_op_func(char *str);


void free_dlistint(stack_t *head);

void pint(stack_t **stack, unsigned int line_number);

void pop(stack_t **stack, unsigned int line_number);

void swap(stack_t **stack, unsigned int line_number);

void add(stack_t **stack, unsigned int line_number);

void nop(stack_t **stack, unsigned int line_number);

void sub(stack_t **stack, unsigned int line_number);

void mul(stack_t **stack, unsigned int line_number);

void divi(stack_t **stack, unsigned int line_number);

void mod(stack_t **stack, unsigned int line_number);

void pchar(stack_t **stack, unsigned int line_number);

void pstr(stack_t **stack, unsigned int line_number);

void rotl(stack_t **stack, unsigned int line_number);

void rotr(stack_t **stack, unsigned int line_number);



#endif
