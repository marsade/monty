#include "monty.h"
/**
 * f_pstr - prints the string at the top of the stack followed by a new line
 * @head: stack head
 * @counter: line number
 * Return: nothing
*/
void f_pstr(stack_t **head, UNUSED unsigned int counter)
{
	stack_t *h;

	h = *head;
	if (h == NULL)
		putchar('\n');
	while (h)
	{
		if (h->n == 0)
			break;
		else if ((h->n < 65) && (h->n > 122))
			continue;
		putchar(h->n);
		h = h->next;
	}
	putchar('\n');
}
