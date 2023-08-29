#include "lists.h"

/**
 * add_nodeint - a function adds a new node at the
 *              beginning of a list
 *
 * @head: pointer on first node
 * @n: int to add in new node
 *
 * Return: address of new element or NULL if fails
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)
		new_node->next = NULL;
	else
		new_node->next = *head;
	new_node->n = n;
	*head = new_node;
	return (*head);
}
