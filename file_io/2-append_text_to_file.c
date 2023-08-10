#include "main.h"

/**
 * append_text_to_file - appends text at end of file
 * @filename: name of file
 * @text_content: content to append
 * Return: 1 on success, -1 on failure
 */

// Función para agregar contenido de texto a un archivo.
// Recibe el nombre del archivo y el contenido de texto a agregar.
// Retorna 1 en caso de éxito y -1 en caso de error.
int append_text_to_file(const char *filename, char *text_content)
{
    int file, wr, len;

    // Verifica si el nombre del archivo es nulo.
    if (!filename)
        return (-1);

    // Abre el archivo en modo de escritura y agregado (append).
    file = open(filename, O_WRONLY | O_APPEND);
    if (file == -1)
        return (-1);

    // Si hay contenido de texto para agregar.
    if (text_content)
    {
        // Calcula la longitud del contenido de texto.
        for (len = 0; *(text_content + len);)
            len++;

        // Escribe el contenido de texto en el archivo.
        wr = write(file, text_content, len);
        if (wr == -1)
        {
            // Si ocurre un error al escribir, cierra el archivo y retorna un código de error.
            close(file);
            return (-1);
        }
    }

    // Cierra el archivo y retorna un código de éxito.
    close(file);
    return (1);
