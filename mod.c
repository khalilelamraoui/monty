#include"monty.h"
/**
* mod - computes the rest of the division of the second top element
* of the stack by the top element of the stack
* @stack: pointer to stack
* @line_number: line number
* Return: void
*/
void mod(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;
	int mod;

	(void)line_number;
	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n",
			line_number);
		exit(EXIT_FAILURE);
	}
	if (temp->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	mod = temp->next->n % temp->n;
	temp->next->n = mod;
	*stack = temp->next;
	free(temp);
}
