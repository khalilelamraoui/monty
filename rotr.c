#include "monty.h"

/**
 * rotr - rotates stack to bottom
 * @head: Double pointer to the stack
 * @value: un used
 */
void rotr(stack_t **head, unsigned int value)
{
	stack_t *last = *head;
	stack_t *lastTwo = last;
	stack_t *tmp = last;
	(void)value;

	if (head == NULL || *head == NULL || (*head)->next == NULL)
		return;

	while (tmp->next != NULL)
	{
		lastTwo = tmp;
		tmp = tmp->next;
	}

	lastTwo->next = NULL;
	tmp->next = last;
	last->prev = tmp;
	*head = tmp;
	tmp->prev = NULL;
}
