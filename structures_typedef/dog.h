#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include "dog.h"

struct dog
{
char *name;
float age;
char *owner;
};

/**
 * main - Entry point of the program.
 *
 * Return: 0 on success.
 */
int main(void)
{
struct dog myDog;

myDog.name = "Poppy";
myDog.age = 5;
myDog.owner = "Bob";

printf("Name of the dog: %s\n", myDog.name);
printf("Age of the dog: %.1f\n", myDog.age);
printf("Owner of the dog: %s\n", myDog.owner);

return (0);
}

#endif /* DOG_H */
