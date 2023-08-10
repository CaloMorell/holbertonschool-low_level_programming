#include "hash_tables.h"

/**
  * hash_table_create - creates a pointer filled hash table
  *
  * @size: size of the array
  * Return: the newly created hash table
  */

// Función para crear una nueva tabla hash
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *hash_table; // Declaración de puntero a estructura hash_table_t
    hash_node_t **array; // Declaración de un arreglo de punteros a nodos de hash
    unsigned long int i; // Variable de iteración

    // Asignar memoria para la estructura de la tabla hash
    hash_table = malloc(sizeof(hash_table_t));
    if (hash_table == NULL)
        return (NULL); // Retornar NULL en caso de fallo en la asignación de memoria

    // Asignar memoria para el arreglo de punteros a nodos de hash
    array = malloc(sizeof(hash_node_t *) * size);
    if (array == NULL) {
        free(hash_table); // Liberar la memoria previamente asignada
        return (NULL); // Retornar NULL en caso de fallo en la asignación de memoria
    }

    // Inicializar cada elemento del arreglo como NULL (tabla vacía)
    for (i = 0; i < size; i++)
        array[i] = NULL;

    // Configurar el tamaño de la tabla hash y el arreglo en la estructura hash_table_t
    hash_table->size = size;
    hash_table->array = array;

    return (hash_table); // Retornar el puntero a la nueva tabla hash creada
}
