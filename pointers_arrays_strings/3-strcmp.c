#include "main.h"
#include <stdio.h>

/**
  * _strcmp - Compares two strings.
  * @s1: The first string.
  * @s2: The second string.
  *
  * Return: "0", if not return other number.
  */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1 != '\0' && s2 != '\0')
	 {
		if (s1[i] != s2[i])
		{
         return (s1[i] - s2[i]);
		}
		i++
     }

     return (0);
}
