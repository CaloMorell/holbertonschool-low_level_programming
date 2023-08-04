#include "main.h"

/**
  * clear_bit - sets a bit to 0 at index
  * @n: number to chnage
  * @index: index where to change
  * Return: 1 if success, -1 if not
  */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int limit;

	// Verifica si el puntero "n" es nulo. Si es así, devuelve -1 para indicar un error.
	if (!n)
		return (-1);

	// Obtiene el número máximo de bits disponibles en el tipo unsigned long int.
	limit = (sizeof(unsigned long int) * 8) - 1;

	// Verifica si el índice especificado está fuera del rango de bits disponibles en el tipo unsigned long int.
	// Si es así, devuelve -1 para indicar un error.
	if (index > limit)
		return (-1);

	// Crea una máscara "limit" que tiene un 1 en la posición determinada por "index" y ceros en todas las demás posiciones.
	// Esto se hace desplazando un 1 a la izquierda "index" veces.
	limit = 1 << index;

	// Verifica si el bit en la posición "index" del número al que apunta el puntero "n" es 1 o 0.
	// Realiza una operación OR entre la máscara "limit" y el número "n".
	// Si el resultado de la operación OR es igual al valor original de "n",
	// esto significa que el bit en la posición "index" ya era 0, por lo que no es necesario realizar cambios.
	// En ese caso, la función simplemente devuelve 1 y sale sin modificar el número.
	if ((limit | *n) == *n)
		return (1);

	// Si el resultado de la operación OR es diferente al valor original de "n",
	// esto significa que el bit en la posición "index" era 1 y necesita ser cambiado a 0.
	// Realiza una operación XOR entre la máscara "limit" y el número "n",
	// lo que resulta en el bit en la posición "index" cambiado a 0.
	*n = *n ^ limit;

	// Devuelve 1 para indicar que el bit ha sido borrado correctamente.
	return (1);
}
