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
	/*add the number to the end*/
	stack_t *h;

	addnode_start(h, n);

	return (h);
}

stack_t *addnode_start(stack *h, int n)
{
	stack_t *tmp = h, new;

	if (h == 0)
		return (0);
	new = malloc(sizeof(stack_t));
	if (new == 0)
		return (0);
	new->n = n;
	new->prev = 0;
	new->next = 

}
