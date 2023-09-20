#include "monty.h"
/**
 * main - the main program for monty interpreter
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, UNUSED char *argv[])
{
	FILE *file;
	char *fn;
	char buffer[1024] UNUSED;

	if (argc != 2)
	{
		perror("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fn = argv[1];
	file = fopen(fn, "r");
	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", fn);
		exit(EXIT_FAILURE);
	}
	return (0);
}
