#include"monty.h"
/**
* add - adds the top two elements of the stack
* @stack: pointer to stack
* @line_number: line number
* Return: void
*/
void add(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;
	int sum;

	(void)line_number;
	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n",
			line_number);
		exit(EXIT_FAILURE);
	}
	sum = temp->n + temp->next->n;
	temp->next->n = sum;
	*stack = temp->next;
	free(temp);
}
