#include "main.h"

/**
* main - Entry point
* @argc: number of arguments
* @argv: argument vectors
*
* Return: 0 (Success)
*/
int main(int argc, char *argv[])
{
	FILE *stream;
	size_t n;
	char *lineptr = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: factor %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	stream = fopen(argv[1], "r");

	if (stream == NULL)
	{
		fprintf(stderr, "Error: can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while ((getline(&lineptr, &n, stream)) != -1)
	{
		factorial(lineptr);
	}

	fclose(stream);
	return (0);
}
