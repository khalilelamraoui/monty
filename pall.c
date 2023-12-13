#include "monty.h"

/**
 * pall - prints all the values on the stack
 * @head: pointer to the stack
 * @value: unused
 *
 * Return: void
 */
void pall(stack_t **head, unsigned int value)
{
	stack_t *curnt = *head;
	(void)value;

	while (curnt)
	{
		printf("%d\n", curnt->n);
		curnt = curnt->next;
	}

}
