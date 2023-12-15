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
	int num = 0;
	stack_t *curnt = *head;
	(void)value;

	if (curnt)
	{
		printf("%d\n", curnt->n);
	}
	else
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", num);
		exit(EXIT_FAILURE);
	}
}
