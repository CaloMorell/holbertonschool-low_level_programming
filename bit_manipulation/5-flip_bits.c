#include "main.h"

/**
  * flip_bits - tells how many bits to flip in order to convert number
  * @n: first number
  * @m: second number
  * Return: the number of different bits between them
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int diff = 0;

	// El bucle se ejecutará mientras al menos uno de los números tenga bits restantes para verificar.
	while (n || m)
	{
		// Compara el bit menos significativo (el último bit) de n y m usando una operación AND con 1.
		// Si los bits son diferentes, incrementa el contador "diff".
		if ((n & 1) != (m & 1))
			diff++;
		
		// Desplaza ambos números una posición a la derecha para verificar los siguientes bits.
		m = m >> 1;
		n = n >> 1;
	}
	
	// Retorna el número de bits diferentes entre n y m.
	return (diff);
}
