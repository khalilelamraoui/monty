#include"monty.h"
/**
* pop - removes the top element of the stack
* @stack: pointer to stack
* @line_number: line number
* Return: void
*/
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;

	(void)line_number;
	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	if (temp->next != NULL)
		temp->next->prev = NULL;
	*stack = temp->next;
	free(temp);
}
