#include"monty.h"
/**
* rotl - rotates the stack to the top
* @stack: pointer to stack
* @line_number: line number
* Return: void
*/
void rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;
	int temp_n;

	(void)line_number;
	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
		return;
	temp_n = temp->n;
	while (temp->next != NULL)
	{
		temp->n = temp->next->n;
		temp = temp->next;
	}
	temp->n = temp_n;
}
