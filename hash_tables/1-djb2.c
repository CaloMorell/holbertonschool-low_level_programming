#include "hash_tables.h"

/**
  * hash_djb2 - creates a hash with djb2 algorithm
  *
  * @str: the string key to create a hash for
  * Return: the generated hash
  */

// La función hash_djb2 toma un puntero a una cadena de caracteres sin firmar (unsigned char)
unsigned long int hash_djb2(const unsigned char *str)
{
    // Inicializa el valor de hash con 5381, un número elegido arbitrariamente
    unsigned long int hash = 5381;
    int c;

    // Itera a través de la cadena hasta llegar al final ('\0')
    while (*str)
    {
        // Obtiene el valor ASCII del carácter actual y lo almacena en 'c'
        c = *str++;

        // La operación de hash: hash * 33 + c
        // Se desplaza el valor hash 5 bits a la izquierda y se le suma el valor original del hash.
        // Luego se suma el valor ASCII del carácter actual 'c'.
        hash = ((hash << 5) + hash) + c;

        // En resumen, esta operación realiza una especie de multiplicación por 33 y suma el valor ASCII del carácter actual.
    }

    // Retorna el valor hash resultante después de procesar toda la cadena
    return hash;
}
