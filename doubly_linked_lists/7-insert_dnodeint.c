#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at a certain index
 * of doubly linked list
 *
 * @h: double pointer to first node in list
 * @idx: index to add new node at
 * @n: value of new node
 * Return: address to new node or NULL on failure
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *before, *after, *new_node;

	/*Verificar si el puntero doble h es NULL*/
	if (!h)
		return (NULL);

	/*Inicializar los punteros "before" y*/
	/*"after" para recorrer la lista*/
	before = *h;
	after = *h;

	/*Reservar memoria para el nuevo nodo y*/
	/*verificar si la asignación es exitosa*/
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	/*Configurar el valor del nuevo nodo*/
	new_node->n = n;

	/*Insertar al principio de la lista (índice 0)*/
	if (idx == 0)
	{
		*h = new_node;
		/*Actualizar el puntero "head" para apuntar al nuevo nodo*/
		new_node->next = after;
		/*El siguiente nodo es el que estaba al inicio de la lista*/

		/*Configurar el puntero previo del nodo que*/
		/*estaba al inicio de la lista (si existe)*/
		if (after)
			after->prev = new_node;

		new_node->prev = NULL;
		/*Como es el nuevo inicio, el prev apunta a NULL*/
		return (new_node);
		/*Devolver la dirección del nuevo nodo*/
	}

	/*Si no se inserta al principio de la lista,*/
	/*avanzar "after" una posición*/
	if (after)
		after = after->next;
	else
		return (NULL);
	/*Si la lista está vacía y se intenta insertar en*/
	/*otro índice, devolver NULL*/

	/*Recorrer la lista para encontrar el nodo antes del índice deseado*/
	for (i = 1; after != NULL && i < idx; i++)
	{
		before = before->next;
		after = after->next;
	}

	/*Si se encontró el nodo antes del índice deseado (i == idx)*/
	if (i == idx)
	{
		before->next = new_node;
		/*El siguiente nodo al nodo "before" será el nuevo nodo*/
		new_node->prev = before;
		/*El prev del nuevo nodo apunta al nodo "before"*/
		new_node->next = after;
		/*El siguiente nodo del nuevo nodo es el nodo "after"*/

		/*Configurar el puntero previo del nodo "after" (si existe)*/
		if (after)
			after->prev = new_node;

		return (new_node);
		/*Devolver la dirección del nuevo nodo*/
	}

	/*Si el índice es mayor que el tamaño de la lista o*/
	/*está fuera de rango, devolver NULL*/
	return (NULL);
}
