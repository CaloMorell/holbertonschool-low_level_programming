#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a linked list
 *
 * @head: double pointer to head of linked list
 * @n: integer value for new node
 * Return: address of new element or NULL for failure
 */

/* Función para agregar un nuevo nodo al comienzo de la lista*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	/*Crear un nuevo nodo*/
	new_node = malloc(sizeof(dlistint_t *));
	if (new_node == NULL)
	{
		/*Si falló la asignación de memoria, retornar NULL*/
		return (NULL);
	}

	/*Configurar el valor del nuevo nodo y sus punteros*/
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	/*Si la lista no está vacía, actualizar el nodo anterior del actual head*/
	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}

	/*Actualizar la cabeza de la lista para que apunte al nuevo nodo*/
	*head = new_node;

	/*Retornar la dirección del nuevo elemento*/
	return (new_node);
}

