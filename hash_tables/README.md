C - Hash tables

Resources

Read or watch:

What is a HashTable Data Structure - Introduction to Hash Tables , Part 0
Hash function
Hash table
Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

General

What is a hash function
What makes a good hash function
What is a hash table, how do they work and how to use them
What is a collision and what are the main ways of dealing with collisions in the context of a hash table
What are the advantages and drawbacks of using hash tables
What are the most common use cases of hash tables

Requirements

General

Allowed editors: vi, vim, emacs
All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
All your files should end with a new line
A README.md file, at the root of the folder of the project is mandatory
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
You are not allowed to use global variables
No more than 5 functions per file
You are allowed to use the C standard library
The prototypes of all your functions should be included in your header file called hash_tables.h
Don’t forget to push your header file
All your header files should be include guarded

Repo:

GitHub repository: holbertonschool-low_level_programming

Directory: hash_tables

File:
README.md
hash_tables.h
0-hash_table_create.c

1-djb2.c

2-key_index.c

3-hash_table_set.c

4-hash_table_get.c

5-hash_table_print.c

6-hash_table_delete.c


Tasks

0. >>> ht = {}

Escriba una función que cree una tabla hash.

Prototipo: hash_table_t *hash_table_create (tamaño int largo sin firmar);
donde size es el tamaño de la matriz
Devuelve un puntero a la tabla hash recién creada
Si algo salió mal, su función debería devolver NULL

Esta función crea una nueva tabla hash (hash_table_t) con el tamaño especificado. Primero asigna memoria para la estructura hash_table_t
y luego asigna memoria para el arreglo de punteros a nodos de hash. Luego, inicializa cada elemento del arreglo como NULL para indicar que
la tabla está vacía. Finalmente, configura el tamaño y el arreglo en la estructura hash_table_t y devuelve un puntero a la tabla hash creada.
Si ocurre algún fallo en la asignación de memoria, la función liberará cualquier memoria asignada previamente y retornará NULL para indicar el error.


