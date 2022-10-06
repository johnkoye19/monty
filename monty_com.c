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
	addnode_start(h, n);

	return (h);
}

#include "lists.h"
/**
 * add_dnodeint - function that adds a new node
 * at the beginning of a dlistint_t list.
 * @head: pointer to pointer of head node
 * @n: the data of the new node
 * Return: returns address of the new element
 */

stack_t *addnode_start(stack_t *h, const int n)
{
	stack_t *new;

	/* check if h is null */
	if (h == 0)
	{
		new = malloc(sizeof(stack_t));
		if (new == 0)
			return (0);
		new->n = n;
		new->prev = 0;
		new->next = 0;
		h = new;
		return (new);
	}
	new = malloc(sizeof(stack_t));
	if (new == 0)
		return (0);
	new->n = n;
	new->prev = 0;
	new->next = *h;
	h->prev = new;
	*head = new;

	return (h);
	/* then craete node */
	/* return new node */
}
