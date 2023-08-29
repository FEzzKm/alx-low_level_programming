#include "lists.h"

/**
 * add_nodeint_end -function adds a new node
 *            at the end of the node
 *
 * @head: pointer on first node of the list
 * @n: element int to add to new node
 *
 * Return: address of new element or NULL if fails
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	temp = *head;

	if (temp == NULL)
		*head = new_node;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}
	return (*head);
}
