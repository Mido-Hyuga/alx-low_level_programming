#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
* new_dog - function that creates a new dog.
* @name: the name of dog.
* @age: the age of dog.
* @owner: the owner of dog.
* Return: retuen 0 or value.
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int i = 0, j = 0, x = 0;

	d = malloc(sizeof(dog_t));
	if (d == 0 || owner == 0 || name == 0)
	{
		free(d);
		return (0);
	}
	while (*(name + i) != 0)
	{
		i++;
	}
	while (*(owner + j) != 0)
	{
		j++;
	}

	d->name = malloc(i + 1);
	d->owner = malloc(j + 1);

	if (d->name == 0 || d->owner == 0)
	{
		free(d->name);
		free(d->owner);
		free(d);
		return (0);
	}
	for (x = 0; x < i; x++)
		d->name[x] = *(name + x);
	d->name[x] = '\0';

	d->age = age;

	while (x < j)
	{
		d->owner[x] = *(owner + x);
		x++;
	}
	d->owner[x] = '\0';
	return (d);
}
