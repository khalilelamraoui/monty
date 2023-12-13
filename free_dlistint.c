#include"monty.h"
/**
* free_dlistint - frees a doubly linked list
* @head: pointer to head of list
* Return: void
*/
void free_dlistint(stack_t *head)
{
	stack_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
