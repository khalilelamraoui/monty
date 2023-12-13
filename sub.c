#include "monty.h"

/**
 * sub - function that subtracts the top element of the stack
 * from the second one
 * @head: Double pointer to the stack
 * @value: not used
 */
void sub(stack_t **head, unsigned int value)
{
	stack_t *tmp;
	(void)value;

	if (head == NULL || *head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", 0);
		exit(EXIT_FAILURE);
	}
	(*head)->next->n -= (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);
}
