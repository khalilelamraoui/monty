#include "monty.h"
/**
* execute - instructions to execute
* @head: double pointer to the stack
* @line: a line of Monty bytecode
* @len: line number in the Monty bytecode file
*
* Return: 0 on success, -1 on error
*/
int execute(stack_t **head, char *line, unsigned int len)
{
	instruction_t funs[] = {
		{"push", push}, {"pall", pall}, {"pint", pint},
		{"pop", pop}, {"swap", swap}, {"add", add},
		{"nop", nop}, {"sub", sub}, {"div", divi},
		{"mul", mul}, {"mod", mod}, {"pchar", pchar},
		{"pstr", pstr}, {"rotl", rotl}, {"rotr", rotr},
		{NULL, NULL},
	};
	unsigned int value, counter = 0;
	char *firstToken = NULL;
	(void)len;

	firstToken = strtok(line, "\n\t ");
	while (firstToken != NULL)
	{
		for (counter = 0; funs[counter].opcode != NULL; counter++)
		{
			if (strcmp(firstToken, funs[counter].opcode) == 0)
			{
				firstToken = strtok(NULL, "\n\t ");
				if (!firstToken)
					firstToken = "0";
				value = atoi(firstToken);
				funs[counter].f(head, value);
				break;
			}
		}
		firstToken = strtok(NULL, "\n\t ");
	}
	return (0);
}
