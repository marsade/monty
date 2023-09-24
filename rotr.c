#include "monty.h"
/**
 * f_rotr - rotates the stack to the top
 * @head: stack head
 * @counter: unused counter
 * return: nothing
*/
void f_rotr(stack_t **head, UNUSED unsigned int counter)
{
	stack_t *current, *prev;

	current = *head;
	if (*head == NULL)
		return;
	if ((*head)->next == NULL)
		return;
	while (current->next != NULL)
		current = current->next;
	prev = current->prev;
	prev->next = NULL;
	(*head)->prev = current;
	current->next = *head;
	*head = current;
}
