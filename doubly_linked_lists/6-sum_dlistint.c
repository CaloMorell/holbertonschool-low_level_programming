#include "lists.h"

/**
 * sum_dlistint - sums the data of a linked list
 *
 * @head: first element of linked list
 * Return: 0 if empty, sum otherwise
 */

int sum_dlistint(dlistint_t *head)
{
	/*Variable para almacenar la suma de los datos de la lista*/
	int sum = 0;

	/*Recorrer la lista mientras el puntero head no sea NULL*/
	/*Esto significa que todavía hay elementos en la lista por recorrer*/
	while (head != NULL)
	{
		/*Sumar el valor del nodo actual (head->n) a la variable sum*/
		sum += head->n;

		/*Mover el puntero head al siguiente nodo de la lista*/
		head = head->next;
	}

	/*Al finalizar el bucle, la variable sum contiene la suma*/
	/*de todos los datos de la lista*/
	return (sum);
}
