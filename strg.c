#include "monty.h"
/**
 * f_pstr - to print the string startg at top the stack
 *
 * @head: the stack head
 * @counter: the line_number
 * Return: return null
*/
void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
