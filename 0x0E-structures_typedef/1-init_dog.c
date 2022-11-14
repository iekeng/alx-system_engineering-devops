#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
  *init_dog - function that initializes a variable of type struct dog
  *
  *struct dog: initialized struct
  *@d : struct name
  *@name: dog's name
  *@age: dog's age
  *@owner: dog's owner
  *
  **/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog my_dog;

    init_dog(&my_dog, "Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}

