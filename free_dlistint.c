#include "monty.h"
/**
 * free_stack - frees the stack from memory
 * @head: pointer to the stack
 */
void free_stack(stack_t **head)
{
	stack_t *curnt = *head, *next;

	while (curnt != NULL)
	{
		next = curnt->next;
		free(curnt);
		curnt = next;
	}
	*head = NULL;
}
