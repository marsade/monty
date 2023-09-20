#include "monty.h"
/**
 * main - the main program for monty interpreter
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, UNUSED char *argv[])
{
	int fd UNUSED;

	if (argc != 2)
	{
		perror("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	return (0);
}
