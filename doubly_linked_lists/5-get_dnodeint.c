#include "lists.h"

/**
 * get_dnodeint_at_index - gets a node at an index
 *
 * @head: the first node of the linked list
 * @index: index at which to find the node
 * Return: the address of wanted node, or NULL if not within list
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i; /*Variable para contar el número de nodos recorridos*/

	/*Recorremos la lista enlazada hasta llegar al nodo en la posición index*/
	/*o hasta que lleguemos al final de la lista (head == NULL)*/
	for (i = 0; head != NULL && i < index; i++)
		head = head->next;

	/*Al salir del bucle, head apuntará al nodo en la posición index o será NULL*/
	/*dependiendo de si el índice es válido o no.*/
	/*Verificamos si llegamos al índice deseado*/
	if (i == index)
		return (head);
	/*Devolvemos el nodo en la posición index*/

	return (NULL);
	/*Si el índice es inválido o el nodo no existe, devolvemos NULL*/
}
