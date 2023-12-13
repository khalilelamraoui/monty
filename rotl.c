#include "monty.h"

/**
 * rotl - rotates stack to top
 * @head: Double pointer to the stack
 * @value: Unused argument (required by the opcode function pointer)
 */
void rotl(stack_t **head, unsigned int value)
{
	stack_t *one = *head;
	stack_t *two = one->next;
	stack_t *tmp = one;
	(void)value;

	if (head == NULL || *head == NULL || (*head)->next == NULL)
		return;

	while (tmp->next != NULL)
		tmp = tmp->next;

	*head = two;
	two->prev = NULL;
	tmp->next = one;
	one->prev = tmp;
	one->next = NULL;
}
