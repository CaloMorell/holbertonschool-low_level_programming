#include "lists.h"

/**
  * delete_dnodeint_at_index - deletes a node at an index in doubly
  * linked list
  *
  * @head: double pointer to first node of linked list
  * @index: index to delete node at
  * Return: 1 on success, -1 if failure
  */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *before, *after, *tmp;

	// Antes de comenzar, inicializamos los punteros before y after apuntando al head de la lista
	before = *head;
	after = *head;

	// Comprobamos si la lista o el puntero al head son NULL, en ese caso, la lista está vacía y no se puede eliminar nada
	if (!head || *head == NULL)
		return (-1);

	// Movemos el puntero after al siguiente nodo, mientras que before se mantiene en el head
	if (after)
		after = after->next;

	// Recorremos la lista hasta el índice deseado o hasta el final de la lista
	for (i = 0; after != NULL && i < index; i++)
	{
		before = before->next; // Avanzamos before al siguiente nodo
		after = after->next;   // Avanzamos after al siguiente nodo
	}

	// Si el índice es 0 y head no es NULL, es decir, queremos eliminar el primer nodo
	if (index == 0 && *head != NULL)
	{
		tmp = *head;          // Guardamos el nodo que vamos a eliminar en tmp
		*head = (*head)->next; // Actualizamos head para que apunte al siguiente nodo
		if (*head)
			(*head)->prev = NULL; // Si head no es NULL, actualizamos el puntero prev del nuevo head a NULL
		free(tmp);           // Liberamos la memoria del nodo eliminado
		return (1);          // Indicamos que la eliminación fue exitosa
	}

	// Si llegamos al índice deseado y before no es NULL, es decir, queremos eliminar un nodo que no es el primero ni el último
	if (i == index && before != NULL)
	{
		tmp = before;          // Guardamos el nodo que vamos a eliminar en tmp
		before = before->prev; // Movemos before al nodo anterior al que vamos a eliminar
		free(tmp);             // Liberamos la memoria del nodo eliminado
		before->next = after; // Actualizamos el puntero next del nodo anterior para saltar el nodo eliminado
		if (after)
			after->prev = before; // Si after no es NULL, actualizamos el puntero prev del siguiente nodo para que apunte al nodo anterior
		return (1);             // Indicamos que la eliminación fue exitosa
	}

	return (-1); // Si el índice es mayor que el tamaño de la lista o si no se cumplieron las condiciones anteriores, la eliminación ha fallado
}
