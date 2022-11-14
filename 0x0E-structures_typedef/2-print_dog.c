#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  *print_dog - prints the struct
  *struct dog - struct to be printed
  *@d: pointer to struct
  **/

void print_dog(struct dog *d)
{
	if (d->name == NULL)
		printf("Name: (nil)");
	else
		printf("Name: %s\n", d->name);

	if (d->age == NULL)
		printf("Age: (nil)");
	else
		printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: nil");
	else
		printf("Owner: %s\n", d->owner);

	if (d == NULL)
		return (0);
}
