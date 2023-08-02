#include "lists.h"

/**
 * add_dnodeint_end - adds node to end of linked list
 *
 * @head: double pointer to head of linked list
 * @n: value for new node
 * Return: the address of the new node or NULL on failure
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *tmp;

	/*Verificamos si el puntero a head es nulo*/
	if (head == NULL)
		return (NULL);

	/*Guardamos el puntero a head en tmp*/
	tmp = *head;

	/*Creamos el nuevo nodo y verificamos si se pudo asignar memoria*/
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	/*Asignamos el valor n al nuevo nodo y apuntamos su next a NULL*/
	new_node->n = n;
	new_node->next = NULL;

	/*Si la lista está vacía (no hay elementos), el nuevo nodo se*/
	/*convierte en la cabeza de la lista*/
	if (!*head)
	{
		*head = new_node;
		new_node->prev = NULL;
		return (new_node);
	}

	/*Si hay elementos en la lista, buscamos el último nodo*/
	while (tmp && tmp->next)
	{
		tmp = tmp->next;
	}

	/*Conectamos el nuevo nodo al final de la lista*/
	tmp->next = new_node;
	new_node->prev = tmp;

	return (new_node);
}
