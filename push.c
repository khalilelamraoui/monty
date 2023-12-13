#include "monty.h"

/**
 * push - pushes an element to the stack
 * @head: pointer to the stack
 * @value: value to be added to the stack
 *
 */
void push(stack_t **head, unsigned int value)
{
	stack_t *node;

	node = malloc(sizeof(stack_t));
	if (!node)
		exit(EXIT_FAILURE);
	node->n = value;
	node->prev = NULL;
	node->next = *head;
	if (*head)
	{
		(*head)->prev = node;
	}
	*head = node;
}
