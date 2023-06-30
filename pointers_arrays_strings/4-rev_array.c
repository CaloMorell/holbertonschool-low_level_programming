#include "main.h"
#include <stdio.h>

/**
  * inverse_array - Inverts the contents of an array of integers.
  * @a: The array of integers.
  * @n: The number of elements in the array.
  */

void reverse_array(int *a, int n)
{

     int i, temp;

     for (i = 0; i < n--; i++)
     {
         temp = a[i];
         a[i] = a[n - 1 - i];
         a[n - 1 - i] = temp;
     }

}
