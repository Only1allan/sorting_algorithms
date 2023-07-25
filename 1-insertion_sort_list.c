#include "sort.h"
/**
 * insertion_sort_list - sort DDL in ascending order
 * @list: pointer to the ddl
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp, *new;

	if (!list)
		return;

	temp = *list;
	while (temp)
	{
		while (temp->next && (temp->n > temp->next->n))
		{
			new = temp->next;
			temp->next = new->next;
			new->prev = temp->prev;

			if (temp->prev)
				temp->prev->next = new;

			if (new->next)
				new->next->prev = temp;
			temp->prev = new;
			new->next = temp;

			if (new->prev)
				temp = new->prev;
			else
				*list = new;
			print_list(*list);
		}
		temp = temp->next;
	}
}
