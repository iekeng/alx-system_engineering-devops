#include <stdio.h>
#include <stdlib.h>
#include "main.h"

 /**
   *free_dog - frees pointers
   *
   *@d: pinter to free
   *
   *Return: nothing
   **/

void free_dog(dog_t *d)
{
	if(d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

