#include "monty.h"
/**
* _strdup - pointer to a newly allocated space in memory, which contains
* a copy of the string given as a parameter.
* @str: The string to be duplicated.
* Return: A pointer or Null on failure.
*/

char *_strdup(char *str)
{
	char *duplic;
	unsigned int i;

	if (str == NULL)
		return (NULL);
	duplic = (char *) malloc((strlen(str) + 1) * sizeof(char));
	if (duplic == NULL)
		return (NULL);
	for (i = 0; i <= strlen(str); i++)
		duplic[i] = str[i];
	return (duplic);
}
