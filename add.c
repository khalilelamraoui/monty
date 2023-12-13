#include "monty.h"
/**
 * add - returns the sum of the top two elements of the stack
 * @head: Double pointer to the stack
 * @value: not used
 * Return: void
 */
void add(stack_t **head, unsigned int value)
{
	stack_t *tmp = *head;
	(void)value;

	(*head)->next->n += (*head)->n;
	*head = (*head)->next;
	free(tmp);
}
