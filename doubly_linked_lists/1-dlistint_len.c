#include "lists.h"

/**
 * dlistint_len - returns number of elements in a linked list
 *
 * @h: first node of linked list
 * Return: number of elements in the linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	/*Se inicializa una variable llamada 'count'*/
	/*para contar el número de elementos.*/
	size_t count = 0;

	/*Mientras el nodo actual no sea NULL*/
	/*(es decir, no se haya llegado al final de la lista)*/
	while (h != NULL)
	{
		/*Avanza al siguiente nodo en la lista.*/
		h = h->next;
		/*Incrementa el contador en uno para contar el nodo actual.*/
		count++;
	}
	/*Devuelve el total de elementos contados,*/
	/*es decir, la longitud de la lista.*/
	return (count);
}
