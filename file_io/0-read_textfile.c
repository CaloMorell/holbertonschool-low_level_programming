#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - reads a text file and prints it to standard out
 * @filename: name of file
 * @letters: how many letters to read and print
 * Return: 0 if error, otherwise number letters printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
    int fi, re, wr;     // Variables para los descriptores de archivo y para guardar resultados
    char *buf;          // Puntero para almacenar el contenido del archivo

    if (!filename || letters == 0)
        return (0);     // Si no se proporciona un nombre de archivo válido o el número de letras es 0, no se hace nada

    fi = open(filename, O_RDONLY);   // Abre el archivo en modo de solo lectura
    if (fi < 0)
        return (0);     // Si no se puede abrir el archivo, retorna 0

    buf = malloc(sizeof(char) * letters); // Asigna memoria para almacenar el contenido del archivo
    if (buf == NULL)
    {
        close(fi);
        return (0);     // Si no se puede asignar memoria, cierra el archivo y retorna 0
    }

    re = read(fi, buf, letters);    // Lee hasta 'letters' bytes del archivo y los almacena en 'buf'
    close(fi);                      // Cierra el archivo después de la lectura

    if (re < 0)
    {
        free(buf);
        return (0);     // Si la lectura fue problemática, libera la memoria y retorna 0
    }

    wr = write(STDOUT_FILENO, buf, re);   // Escribe el contenido leído en la salida estándar (pantalla)
    if (wr <= 0)
    {
        free(buf);
        return (0);     // Si la escritura tuvo problemas, libera la memoria y retorna 0
    }

    free(buf);          // Libera la memoria asignada para el buffer
    return (wr);        // Retorna el número de bytes escritos en la salida estándar (éxito)
}
