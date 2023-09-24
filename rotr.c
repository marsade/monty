#include "monty.h"
/**
 * f_rotr - rotates the stack to the top
 * @head: stack head
 * @counter: unused counter
 * return: nothing
*/
void f_rotr(stack_t **head, UNUSED unsigned int counter)
{
	stack_t *prev, *next;

	prev = NULL;
	next = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
}
