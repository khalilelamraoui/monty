#include"monty.h"
/**
* is_number - checks if string is a number
* @s: string to check
* Return: 1 if true, 0 if false
*/
int is_number(char *s)
{
	int i = 0;

	if (s == NULL)
		return (0);
	if (s[0] == '-')
		i = 1;
	for (; s[i] != '\0'; i++)
	{
		if (isdigit(s[i]) == 0)
			return (0);
	}
	return (1);
}
