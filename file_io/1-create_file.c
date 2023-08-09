#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: string with content of the file
 * Return: 1 on success, -1 on failure
 */

// Función para crear un archivo y escribir un contenido de texto en él.
// Recibe el nombre del archivo (filename) y el contenido de texto (text_content).
int create_file(const char *filename, char *text_content)
{
    int fd, rd, wr;  // Declaración de variables enteras para los descriptores de archivo, lectura y escritura.

    // Verifica si se proporcionó un nombre de archivo válido.
    if (!filename)
        return (-1);

    // Abre el archivo en modo de creación (O_CREAT), escritura (O_WRONLY) y truncamiento (O_TRUNC).
    // Los permisos se establecen en 00600 (lectura y escritura para el propietario).
    fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 00600);
    if (fd == -1)  // Comprueba si hubo un error al abrir el archivo.
        return (-1);

    // Verifica si se proporcionó contenido de texto.
    if (text_content)
    {
        // Calcula la longitud del contenido de texto.
        for (rd = 0; *(text_content + rd);)
            rd++;

        // Escribe el contenido de texto en el archivo.
        wr = write(fd, text_content, rd);
        if (wr != rd)  // Comprueba si la escritura fue exitosa.
        {
            close(fd);  // Cierra el archivo en caso de error.
            return (-1);
        }
    }

    // Cierra el archivo después de escribir o en caso de que no haya contenido de texto.
    close(fd);

    return (1);  // Indica que el proceso se completó exitosamente.
}
