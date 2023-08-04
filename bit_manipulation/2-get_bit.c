#include "main.h"

/**
 * get_bit - gets a bit at a given index
 * @n: numberto find bit for
 * @index: index to find bit at
 * Return: value of bit at index or 01 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int dig, lim = 1;

	// Obtiene el número máximo de bits disponibles en el tipo unsigned long int.
	dig = (sizeof(unsigned long int) * 8) - 1;
	
	// Verifica si el número n es igual a 0. Si es así, no importa la posición del bit, y devuelve 0.
	if (n == 0)
		return (0);

	// Establece el bit más a la izquierda de la variable "lim" en la posición determinada por "index".
	lim = lim << index;
	
	// Verifica si el índice especificado está fuera del rango de bits disponibles en el tipo unsigned long int.
	// Si es así, devuelve -1 para indicar un error.
	if (index > dig)
		return (-1);
	
	// Comprueba si el bit en la posición "index" del número "n" es 1 o 0 y devuelve el resultado.
	// Realiza una operación AND entre "lim" y "n" para extraer el valor del bit en la posición "index".
	if (lim & n)
		return (1);
	else
		return (0);
}
