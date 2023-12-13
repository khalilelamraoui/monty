#include"monty.h"
/**
* divi - divides the second top element of the stack by the top element
* @stack: pointer to stack
* @line_number: line number
* Return: void
*/
void divi(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;
	int div;

	(void)line_number;
	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n",
			line_number);
		exit(EXIT_FAILURE);
	}
	if (temp->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	div = temp->next->n / temp->n;
	temp->next->n = div;
	*stack = temp->next;
	free(temp);
}
