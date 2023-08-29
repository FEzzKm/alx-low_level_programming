#include "lists.h"

/**
 * free_listint2 - function frees the list and sets head to NULL
 *
 * @head: pointer on first node
 *
 * Return: null
*/
void free_listint2(listint_t **head)
{
	listint_t *current, *temp;

	if (head != NULL)
	{
		current = *head;

		while ((temp = current) != NULL)
		{
			current = current->next;
			free(temp);
		}
		*head = NULL;
	}
}
