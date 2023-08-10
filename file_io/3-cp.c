#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

void error_file_from(char *, char *);
void error_file_to(char *, char *);
void error_close(int, char *);

/**
 * copy_file - copies a file to another
 * @file_to: file to copy to
 * @file_from: file to copy from
 * Return: 0
 */

// Función para copiar un archivo a otro
int copy_file(char *file_to, char *file_from)
{
	int to, from, wr, err, re;
	char *buf;

	// Se asigna memoria para un buffer de lectura/escritura
	buf = malloc(sizeof(char) * 1024);
	if (!buf)
		return (0);

	// Se abre el archivo de origen en modo lectura
	from = open(file_from, O_RDONLY);
	if (from == -1)
		error_file_from(file_from, buf);

	// Se abre o crea el archivo de destino en modo escritura
	to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (to == -1)
		error_file_to(file_to, buf);

	// Se lee una cantidad de datos del archivo de origen y se copian al archivo de destino
	re = read(from, buf, 1024);

	do {
		if (re == -1)
			error_file_from(file_from, buf);
		if (re == 0)
			break;
		// Se escribe la cantidad de datos leídos en el archivo de destino
		wr = write(to, buf, re);
		if (wr == -1)
			error_file_to(file_to, buf);
		// Se vuelve a leer del archivo de origen
		re = read(from, buf, 1024);
	} while (re > 0);

	// Se cierran los archivos
	err = close(to);
	if (err == -1)
		error_close(to, buf);
	err = close(from);
	if (err == -1)
		error_close(from, buf);

	// Se libera la memoria asignada al buffer
	free(buf);
	return (0);
}

/**
 * error_close - error procedure when issue with closing
 * @fd: integer where file is opened
 * @buf: buffer to free
 * Return: void
 */
// Función para manejar el error de cierre de archivo
void error_close(int fd, char *buf)
{
	free(buf);
	// Liberar la memoria asignada para el buffer
	// Imprimir mensaje de error en la salida de error estándar (stderr)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	// Salir del programa con un código de error específico (100)
	exit(100);
}

/**
 * error_file_from - error procedure when issue with file from
 * @file_from: name of file from
 * @buf: buffer to free
 * Return: void
 */
// Función para manejar el error de lectura desde archivo de origen
void error_file_from(char *file_from, char *buf)
{
	// Liberar la memoria asignada para el buffer
	free(buf);
	// Imprimir mensaje de error en la salida de error estándar (stderr)
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
	// Salir del programa con un código de error específico (98)
	exit(98);
}

/**
 * error_file_to - error procedure when file to cant be created
 * @file_to: name of file to
 * @buf: buffer to free
 * Return: void
 */
// Función para manejar el error de escritura a archivo de destino
void error_file_to(char *file_to, char *buf)
{
	// Liberar la memoria asignada para el buffer
	free(buf);
	// Imprimir mensaje de error en la salida de error estándar (stderr)
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
	// Salir del programa con un código de error específico (99)
	exit(99);
}

/**
 * main - main of our program
 * @argc: number of arugments
 * @argv: array of arguments
 * Return: 0
 */
// Función principal (main) del programa
int main(int argc, char *argv[])
{
	// Verifica si se proporcionan los argumentos correctos
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	// Llama a la función para copiar el archivo
	copy_file(argv[2], argv[1]);
	return (0);
}
