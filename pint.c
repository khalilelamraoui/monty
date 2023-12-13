#include "monty.h"

/**
 * pint - prints the stack's top value
 * @head: pointer to the stack
 * @value: not used
 *
 * Return: void
 */
void pint(stack_t **head, unsigned int value)
{
	stack_t *curnt = *head;
	(void)value;

	if (curnt)
	{
		printf("%d\n", curnt->n);
	}
	else
	{
		fprintf(stderr, "Error: can't pint, stack empty\n");
		exit(EXIT_FAILURE);
	}
}
