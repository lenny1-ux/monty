#include "monty.h"
/**
 * f_pall - to print full the stack
 * @head: the stack head
 * @counter: no of items used
 * Return: return null
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
