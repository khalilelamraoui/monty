#include "monty.h"

/**
 * pop - removes the top element of the stack
 * @head: pointer to the stack
 * @value: not used
 *
 * Return: void
 */
void pop(stack_t **head, unsigned int value)
{
	int num = 0;
	stack_t *tmp = *head;
	(void)value;

	if (*head)
	{
		*head = (*head)->next;
		free(tmp);
	}
	else
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", num);
		exit(EXIT_FAILURE);
	}
}
