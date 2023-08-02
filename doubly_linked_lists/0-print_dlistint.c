#include "lists.h"

/**
 * print_dlistint- prints elements of a linked list
 *
 * @h: first node of the linked list
 * Return: number of elements in the linked list
 */

size_t print_dlistint(const dlistint_t *h)
{
	/*Creamos una variable llamada node_count que almacenará*/
	/*el número de nodos en la lista y la inicializamos en 0.*/
	size_t node_count = 0;

	/*Usamos un bucle while para recorrer la lista enlazada.*/
	/*El bucle continuará mientras el puntero h no sea NULL,*/
	/*lo que significa que aún hay nodos que visitar en la lista.*/
	while (h != NULL)
	{
		/*Imprimimos el valor del nodo actual (h->n) utilizando printf.*/
		/*h->n es el campo que contiene el valor del nodo.*/
		printf("%d\n", h->n);

		/*Movemos el puntero h al siguiente nodo de la lista.*/
		/*h->next es un puntero que apunta al siguiente nodo.*/
		h = h->next;

		/*Incrementamos el contador de nodos para rastrear*/
		/*cuántos nodos hemos visitado hasta ahora.*/
		node_count++;
	}

	/*Una vez que el bucle ha terminado, hemos recorrido toda*/
	/*la lista y hemos impreso todos sus elementos.*/
	/*Ahora, devolvemos el valor de node_count, que representa*/
	/*el número de nodos en la lista.*/
	return (node_count);
}
