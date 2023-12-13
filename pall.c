#include"monty.h"
/**
* pall - prints all the values on the stack
* @stack: pointer to stack
* @line_number: line number
* Return: void
*/
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;

	(void)line_number;
	if (stack == NULL || *stack == NULL)
		return;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
