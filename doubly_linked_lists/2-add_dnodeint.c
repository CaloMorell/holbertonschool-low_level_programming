#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a linked list
 *
 * @head: double pointer to head of linked list
 * @n: integer value for new node
 * Return: address of new element or NULL for failure
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *tmp;

	/*Verificar si el puntero a la cabeza de la lista es nulo*/
	if (head == NULL)
		return (NULL);

	/*Asignar memoria para el nuevo nodo*/
	new_node = malloc(sizeof(dlistint_t *));
	if (new_node == NULL)
		return (NULL);

	/*Configurar el valor del nuevo nodo y su puntero previo*/
	new_node->n = n;
	new_node->prev = NULL;

	/*Guardar la dirección del nodo actual de la cabeza en 'tmp'*/
	tmp = *head;

	/*Hacer que el puntero 'next' del nuevo nodo apunte*/
	/*al nodo actual de la cabeza*/
	new_node->next = tmp;

	/*Actualizar la cabeza de la lista para que apunte al nuevo nodo*/
	*head = new_node;

	/*Si el nodo actual de la cabeza no es nulo*/
	/*actualizar su puntero previo para que apunte al nuevo nodo*/
	if (tmp)
		tmp->prev = *head;

	/*Retornar la dirección del nuevo nodo agregado*/
	return (new_node);
}
