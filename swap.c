#include"monty.h"
/**
* swap - swaps the top two elements of the stack
* @stack: pointer to stack
* @line_number: line number
* Return: void
*/
void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;
	int temp_n;

	(void)line_number;
	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n",
			line_number);
		exit(EXIT_FAILURE);
	}
	temp_n = temp->n;
	temp->n = temp->next->n;
	temp->next->n = temp_n;
}
