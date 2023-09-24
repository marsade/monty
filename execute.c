#include "monty.h"
/**
* execute - executes the opcode
* @stack: head linked list - stack
* @counter: line_counter
* @content: line content
* Return: no return
*/
void execute(char *content, stack_t **stack, unsigned int counter)
{
	instruction_t opst[] = {
				{"push", f_push}, {"pall", f_pall}, {"pint", f_pint},
				{"pop", f_pop}, {"swap", f_swap}, {"add", f_add},
				{"nop", f_nop}, {"sub", f_sub}, {"div", f_div},
				{"mul", f_mul}, {"mod", f_mod}, {"pchar", f_pchar},
				{NULL, NULL}};
	unsigned int i = 0;
	char *op;

	op = strtok(content, " \n\t");
	if (op && op[0] == '#')
		return;
	bus.arg = strtok(NULL, " \n\t");
	while (opst[i].opcode && op)
	{
		if (strcmp(op, opst[i].opcode) == 0)
		{
			opst[i].f(stack, counter);
			return;
		}
		else if (strcmp(op, "queue") == 0)
		{
			bus.lifi = 1;
			break;
		}
		else if (strcmp(op, "stack") == 0)
		{
			bus.lifi = 0;
			break;
		}
		i++;
	}
	if (op && opst[i].opcode == NULL)
	{
		fclose(bus.file);
		fprintf(stderr, "L%d: unknown instruction %s\n", counter, op);
		free(content);
		free_stack(*stack);
		exit(EXIT_FAILURE); }
}
