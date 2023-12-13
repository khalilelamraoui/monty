#include"monty.h"
/**
* sub - subtracts the top element of the stack from the second top element
* @stack: pointer to stack
* @line_number: line number
* Return: void
*/
void sub(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;
	int sub;

	(void)line_number;
	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n",
			line_number);
		exit(EXIT_FAILURE);
	}
	sub = temp->next->n - temp->n;
	temp->next->n = sub;
	*stack = temp->next;
	free(temp);
}
