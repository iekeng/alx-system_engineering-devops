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
	if (*d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
}

