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
	stack_t *tmp = *head;
	(void)value;

	if (*head)
	{
		*head = (*head)->next;
		free(tmp);
	}
	else
	{
		fprintf(stderr, "Error: can't pint, stack empty\n");
		exit(EXIT_FAILURE);
	}
}
