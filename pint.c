#include "monty.h"

/**
 * pint - prints the stack's top value
 * @head: pointer to the stack
 * @value: not used
 * @lens: line number
 *
 * Return: void
 */
void pint(stack_t **head, unsigned int value, unsigned int lens)
{
	stack_t *curnt = *head;
	(void)value;

	if (curnt)
	{
		printf("%d\n", curnt->n);
	}
	else
	{
		fprintf(stderr, "L%d: can't pint, stack empty", lens);
		exit(EXIT_FAILURE);
	}
}
