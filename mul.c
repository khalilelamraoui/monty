#include "monty.h"

/**
 * mul - multiplies the top two elements of the stack
 * @head: Double pointer to the stack
 * @value: Unused argument (required by the opcode function pointer)
 */
void mul(stack_t **head, unsigned int value)
{
	stack_t *tmp;
	(void)value;

	(*head)->next->n *= (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);
}
