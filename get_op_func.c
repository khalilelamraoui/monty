#include"monty.h"
/**
 * get_op_func - selects the correct function to perform the operation
 * @str: the operator passed as argument
 * Return: pointer to the function that corresponds to the operator
 */
instruct_func get_op_func(char *str)
{
	instruction_t op[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{"sub", sub},
		{"div", divi},
		{"mul", mul},
		{"mod", mod},
		{"pchar", pchar},
		{"pstr", pstr},
		{"rotl", rotl},
		{"rotr", rotr},
		{NULL, NULL}
	};
	int i = 0;

	while (op[i].opcode != NULL)
	{
		if (strcmp(op[i].opcode, str) == 0)
			return (op[i].f);
		i++;
	}
	return (NULL);
	free(str);
}
