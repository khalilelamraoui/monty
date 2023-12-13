#include "monty.h"

/**
 * custom_getline - scans a line from a stream.
 * @line: Buffer for the line.
 * @n: Size of the buffer.
 * @stream: Input stream.
 * Return: Number of characters read, -1 on error or EOF.
 */

int custom_getline(char **line, size_t *n, FILE *stream)
{
	int btsRead = 0;
	size_t totalBtsRead = 0;
	int ch;
	char *newLine;

	if (line == NULL || n == NULL || stream == NULL)
		return (-1);
	if (*line == NULL || *n == 0)
	{
		*n = 128;
		*line = (char *)malloc(*n);
		if (*line == NULL)
			return (-1);
	}
	while ((ch = fgetc(stream)) != EOF)
	{
		if (totalBtsRead >= *n - 1)
		{
			*n *= 2;
			newLine = (char *)realloc(*line, *n);
			if (newLine == NULL)
				return (-1);
			*line = newLine;
		}
		(*line)[totalBtsRead++] = (char)ch;
		btsRead++;
		if (ch == '\n')
			break;
	}
	if (btsRead == 0 && totalBtsRead == 0)
		return (-1);
	(*line)[totalBtsRead] = '\0';
	return (totalBtsRead);
}
