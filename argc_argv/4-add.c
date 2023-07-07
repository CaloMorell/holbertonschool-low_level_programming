#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Programa que suma números positivos
 *
 * @argc: Cantidad de argumentos
 * @argv: Vector de argumentos
 *
 * Return: 0;
 */
int main(int argc, char *argv[])
{
    int sum = 0;

    if (argc == 1)
    {
        printf("0\n");
        return (0);
    }

    for (int i = 1; i < argc; i++)
    {
        char *num = argv[i];
        int j = 0;

        while (num[j] != '\0')
        {
            if (!isdigit(num[j]))
            {
                printf("Error\n");
                return (1);
            }
            j++;
        }

        sum += atoi(num);
    }

    printf("%d\n", sum);
    return (0);
}
