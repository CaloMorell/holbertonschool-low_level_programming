#include "main.h"

/**
  * binary_to_uint - converts a binary string to an unsigned int
  * @b: string of the binary to convert
  * Return: converted number or 0 if null, non 0/1 in string
  */

unsigned int binary_to_uint(const char *b)
{
	// Variable para almacenar el resultado final
	unsigned int n = 0, i;

	// Verifica si la cadena de entrada es nula, si es así, devuelve 0.
	if (!b)
		return (0);

	// Bucle para recorrer la cadena de entrada hasta encontrar el final '\0'.
	for (i = 0; *(b + i); i++)
	{
		// Desplaza los bits de n un lugar hacia la izquierda (equivalente a multiplicar por 2).
		n = n << 1;

		// Comprueba si el carácter actual es '1', en cuyo caso establece el último bit de n como 1.
		if (*(b + i) == '1')
			n = n | 1;

		// Si el carácter actual no es '0' ni '1', entonces la cadena contiene caracteres no válidos.
		// En tal caso, devuelve 0 para indicar un error.
		else if (*(b + i) != '0')
			return (0);
	}

	// Retorna el valor de n, que representa el número binario convertido a decimal.
	return (n);
}
