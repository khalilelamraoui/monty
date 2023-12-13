#include "monty.h"

/**
 * mod - calculates the remainder of the division of the second top
 * element of the stack by the top element of the stack.
 * @head: double pointer to the stack
 * @value: not used
 */
void mod(stack_t **head, unsigned int value)
{
	stack_t *temp;
	int number = 0;
	(void)value;

	if (head == NULL || *head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", number);
		exit(EXIT_FAILURE);
	}

	if ((*head)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", number);
		exit(EXIT_FAILURE);
	}

	(*head)->next->n %= (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);
}
