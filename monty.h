#ifndef MONTY_H
#define MONTY_H

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


int execute(stack_t **head, char *line, unsigned int len);

int custom_getline(char **lineptr, size_t *n, FILE *stream);

char *_strdup(char *str);

void int_stack(stack_t **head);
void free_stack(stack_t **head);

void add(stack_t **head, unsigned int value);
void sub(stack_t **head, unsigned int value);
void divi(stack_t **head, unsigned int value);
void mul(stack_t **head, unsigned int value);
void mod(stack_t **head, unsigned int value);
void nop(stack_t **head, unsigned int value);

void push(stack_t **head, unsigned int value);
void pall(stack_t **head, unsigned int value);
void pint(stack_t **head, unsigned int value, unsigned int lens);
void pop(stack_t **head, unsigned int value);
void swap(stack_t **head, unsigned int value);

void pstr(stack_t **head, unsigned int value);
void pchar(stack_t **head, unsigned int value);

void rotl(stack_t **head, unsigned int value);
void rotr(stack_t **head, unsigned int value);

#endif
