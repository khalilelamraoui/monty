#include"monty.h"
/**
* pint - prints the value at the top of the stack
* @stack: pointer to stack
* @line_number: line number
* Return: void
*/
void pint(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;

	(void)line_number;
	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", temp->n);
}
