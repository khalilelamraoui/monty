#include "monty.h"

int process_filePtr(const char *filePtr);

/**
 * main - Entry point.
 * @argc: The number of arguments.
 * @argv: An array of argument strings.
 * Return: EXIT_SUCCESS on success.
 */
int main(int argc, char **argv)
{
	const char *filePtr;
	int output;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		return (EXIT_FAILURE);
	}
	filePtr = argv[1];
	output = process_filePtr(filePtr);
	return (output);
}

/**
 * process_filePtr - processes the monty bytecode filePtr.
 * @filename: Monty bytecode filePtr to process.
 * Return: EXIT_SUCCESS on success.
 */
int process_filePtr(const char *filename)
{
	FILE *filePtr;
	stack_t *head = NULL;
	char *lineptr = NULL, *lineptr_copy;
	size_t len = 0;
	ssize_t read;
	int output;
	unsigned int lens = 0;

	filePtr = fopen(filename, "r");
	if (filePtr == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", filename);
		return (EXIT_FAILURE);
	}
	while ((read = custom_getline(&lineptr, &len, filePtr)) != -1)
	{
		lens++;
		lineptr_copy = _strdup(lineptr);
		if (lineptr_copy == NULL)
		{
			fprintf(stderr, "Error: Memory allocation failed\n");
			free_stack(&head);
			fclose(filePtr);
			free(lineptr);
			return (EXIT_FAILURE);
		}
		if (lineptr_copy[0] != '#')
		{
			output = execute(&head, lineptr_copy, lens);
		}
		if (output == -1)
		{
			fprintf(stderr, "L%d: Unknown instruction %s", lens, lineptr_copy);
			free(lineptr_copy);
			free_stack(&head);
			fclose(filePtr);
			free(lineptr);
			return (EXIT_FAILURE);
		}
		free(lineptr_copy);
	}
	free_stack(&head);
	fclose(filePtr);
	free(lineptr);
	return (EXIT_SUCCESS);
}
