#include "main.h"

/**
  * set_bit - sets a bit to 1 at certain index
  * @n: number to change
  * @index: index at which to set bit to 1
  * Return: 1 if it worked, -1 if it didn't
  */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int limit, dig;

	// Obtiene el número máximo de bits disponibles en el tipo unsigned long int.
	limit = (sizeof(unsigned long int) * 8) - 1;

	// Verifica si el índice especificado está fuera del rango de bits disponibles en el tipo unsigned long int.
	// Si es así, devuelve -1 para indicar un error.
	if (index > limit)
		return (-1);

	// Crea una máscara "dig" que tiene un 1 en la posición determinada por "index" y ceros en todas las demás posiciones.
	// Esto se hace desplazando un 1 a la izquierda "index" veces.
	dig = 1 << index;

	// Realiza una operación OR entre la máscara "dig" y el número "n".
	// Esto establece el bit en la posición "index" de "n" en 1 sin cambiar otros bits.
	*n = *n | dig;

	// Devuelve 1 para indicar que el bit ha sido establecido correctamente.
	return (1);
}
