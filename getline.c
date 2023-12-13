#include "monty.h"
/**
* getline - Custom getline function to read input from stream.
* @line: Pointer to the input buffer.
* @size: Pointer to the size of the input buffer.
* @stream: The input stream.
* Return: The number of characters read, -1 on failure.
*/
ssize_t getline(char **line, size_t *size, FILE *stream)
{
	char *buffer, *tmp;

	size_t bufsize = 0;
	int c;

	unsigned long int i = 0;

	if (line == NULL || size == NULL || stream == NULL)
		return (-1);
	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
		return (-1);
	bufsize = 1024;
	while ((c = fgetc(stream)) != EOF && c != '\n')
	{
		if (i == bufsize)
		{
			tmp = realloc(buffer, bufsize * 2);
			if (tmp == NULL)
			{
				free(buffer);
				return (-1);
			}
			buffer = tmp;
			bufsize *= 2;
		}
		buffer[i++] = c;
	}
	buffer[i] = '\0';
	*line = buffer;
	*size = bufsize;
	return (i);
	free(buffer);
}
