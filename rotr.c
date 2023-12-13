#include"monty.h"
/**
* rotr - rotates the stack to the bottom
* @stack: pointer to stack
* @line_number: line number
* Return: void
*/
void rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;
	int temp_n;

	(void)line_number;
	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
		return;
	while (temp->next != NULL)
		temp = temp->next;
	temp_n = temp->n;
	while (temp->prev != NULL)
	{
		temp->n = temp->prev->n;
		temp = temp->prev;
	}
	temp->n = temp_n;
}
