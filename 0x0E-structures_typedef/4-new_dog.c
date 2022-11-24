#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
  *_strlen - find length of string
  *
  *@str: string input
  *
  **/
int _strlen(const char *str)
{
	int length = 0;

	while (*str++)
		length++;
	return (length);
}

/**
  *_strcpy - copies string src to dest
  *
  *@dest: first string input
  *@src: second string input
  *
  **/

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
}

/**
  *new_dog - funtion that creates a dog
  *
  *@name: name of dog
  *@age: age of dog
  *@owner: dog owner
  *
  *Return: struct pointer
  *        NULL if funtion fails
  **/

dog_t *new_dog(char *name, float age, char *owner)
{
		dog_t *d;

		if (!name || age < 0 || !owner)
			return (NULL);

		dog = (dog_t *) malloc(sizeof(dog_t));

		if (dog == NULL)
			return (NULL);

		dog->name = malloc(sizeof(char) * (_strlen(name) + 1));

		if (dog->name == NULL)
		{
			free(dog);
			return (NULL);
		}

		dog->name = _strcpy(dog->name, name);
		dog->age = age;
		dog->owner = _strcpy(dog->owner, owner);

		return (dog);

}

