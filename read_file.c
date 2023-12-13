#include"monty.h"
/**
* read_file - reads a file and executes monty opcodes
* @file_name: name of file to read
* @stack: pointer to stack
* Return: void
*/


void close_file(FILE *file) {
	fclose(file);
}

void read_file(char *filename, stack_t **stack)
{
	FILE *file;
	char *line = NULL;
	size_t len = 0;
	ssize_t read;
	unsigned int line_number = 0;
	char *opcode;
	char *value;

	file = fopen(filename, "r");
	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", filename);
		exit(EXIT_FAILURE);
	}
	while ((read = getline(&line, &len, file)) != -1)
	{
		line_number++;
		opcode = strtok(line, " \n\t\r");
		if (opcode == NULL || strncmp(opcode, "#", 1) == 0)
			continue;
		if (strcmp(opcode, "push") == 0)
		{
			value = strtok(NULL, " \n\t\r");
			if (value == NULL || is_number(value) == 0)
			{
				fprintf(stderr, "L%d: usage: push integer\n", line_number);
				close_file(file);
				free(line);
				exit(EXIT_FAILURE);
			}
			var_global.value = atoi(value);
		}
		get_op_func(opcode)(stack, line_number);
	}
	close_file(file);
	free(line);
	free_dlistint(*stack);
}
