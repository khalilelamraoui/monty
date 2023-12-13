#include "monty.h"

/**
 * divi - returns the division of the second top element of the stack
 * by the top element
 * @head: double pointer to the stack
 * @value: unused
 */
void divi(stack_t **head, unsigned int value)
{
	stack_t *tmp;
	(void)value;

	if ((*head)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", 0);
		exit(EXIT_FAILURE);
	}

	(*head)->next->n /= (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);
}
