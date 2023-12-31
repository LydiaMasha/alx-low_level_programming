#include "lists.h"

/**
 * insert_nodeint_at_index - Insert new node at given position in a list
 * @head: A pointer to a pointer to the head of the list
 * @idx: The index where the new node should be added
 * @n: The value to be inserted in the new node
 *
 * Return: The address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp = *head;
	unsigned int i;

	if (idx == 0)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (NULL);

		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (i = 0; temp != NULL && i < idx - 1; i++)
	{
		temp = temp->next;
	}

	if (temp == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = temp->next;
	temp->next = new_node;

	return (new_node);
}
