#include "monty.h"
/**
 * f_rotl - rotates the stack to the top
 * @head: stack head
 * @counter: unused counter
 * return: nothing
*/
void f_rotl(UNUSED stack_t **head, UNUSED unsigned int counter)
{
	stack_t *fn, *next;

	if (*head == NULL)
	{
		return;
	}
	fn = *head;
	next = (*head)->next;
	while (fn->next != NULL)
		fn = fn->next;
	(*head)->next = NULL;
	fn->next = *head;
	*head = next;
	(*head)->prev = NULL;
}
