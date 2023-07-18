#include <stdio.h>
#include "dog.h"

/**
 * main - Define a new type struct dog.
 *
 * Return - 0.
 */

int main(void)

{
struct dog myDog;

myDog.name = "Poppy";
myDog.age = 5;
myDog.owner = "Bob";

printf("My name is %s, and I am %.1f :) - Woof!\n", myDog.name, myDog.age);

return (0);
}
