#include "main.h"
#include <stdio.h>

/**
  * _strcmp - Compares two strings.
  * @s1: The first string.
  * @s2: The second string.
  *
  * Return: 0 if the strings are equal, a negative value if s1 < s2,
  * or a positive value if s1 > s2.
  */
int _strcmp(char *s1, char *s2)
{
int i = 0;

while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] != s2[i])
{
return (s1[i] - s2[i]);
}
i++;
}

return (0);
}
