#include "lists.h"

/**
 * free_dlistint - frees a linked list
 *
 * @head: first member of list
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = NULL;
	/*Creamos un puntero temporal para almacenar el siguiente nodo.*/

	while (head != NULL)
	{
		tmp = head->next;
		/*Guardamos el siguiente nodo en tmp para no perderlo.*/
		free(head);
		/*Liberamos el nodo actual (el que apunta head).*/
		head = tmp;
		/*Movemos head al siguiente nodo (que está almacenado en tmp).*/
	}
}

