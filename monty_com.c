#include "monty.h"

void pall(stack_t *h)
{
	stack_k *tmp;
	if (h == 0)
		return;
	while (tmp)
	{
		printf("%d", tmp->n);
		tmp = tmp->next;
	}
	return;
}

stack_t *push(int n)
{
}
