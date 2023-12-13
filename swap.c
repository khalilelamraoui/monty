#include "monty.h"

/**
 * swap - swaps the top two elements of the stack
 * @head: pointer to the stack
 * @value: not used
 * Return: void
 */
void swap(stack_t **head, unsigned int value)
{
	int carry = 0;
	stack_t *curnt = (*head);
	(void)value;

	carry = curnt->next->n;
	curnt->next->n = curnt->n;
	curnt->n = carry;
}
