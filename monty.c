#include "monty.h"
/**
* main - entry point
* @argc: number of arguments
* @argv: array of arguments
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
	stack_t *stack = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	read_file(argv[1], &stack);
	free_dlistint(stack);
	return (0);
}
