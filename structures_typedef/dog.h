#include <stdio.h>
#include <stdlib.h>

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

printf("name the dog: %s\n", myDog.name);
printf("age the dog: %f\n", myDog.age);
printf("owner the dog: %s\n", myDog.owner);

return (0);
}
