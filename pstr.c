#include "monty.h"

/**
 * pstr - prints the string starting from top of the stack
 * @head: Double pointer to the stack
 * @value: not used
 */
void pstr(stack_t **head, unsigned int value)
{
	stack_t *tmp = *head;
	(void)value;

	while (tmp != NULL && tmp->n != 0 && tmp->n >= 0 && tmp->n <= 127)
	{
		putchar(tmp->n);
		tmp = tmp->next;
	}

	putchar('\n');
}
