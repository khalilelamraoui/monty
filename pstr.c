#include"monty.h"
/**
* pstr - prints the string starting at the top of the stack
* @stack: pointer to stack
* @line_number: line number
* Return: void
*/
void pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;

	(void)line_number;
	if (stack == NULL || *stack == NULL)
	{
		printf("\n");
		return;
	}
	while (temp != NULL)
	{
		if (temp->n <= 0 || temp->n > 127)
			break;
		printf("%c", temp->n);
		temp = temp->next;
	}
	printf("\n");
}
