#include <stdio.h>
#include "dog.h"

int main(void)
{
    struct dog my_dog;

    init_dog(&my_dog, "Poppy", 3.5, "Bob");

    printf("My dog's name is %s\n", my_dog.name);
    printf("She is %.1f years old\n", my_dog.age);
    printf("Her owner is %s\n", my_dog.owner);

    return (0);
}
