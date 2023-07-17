#include "dog.h"
/**
* init_dog -  function that initialize a variable of type struct dog.
* @d: the structer.
* @name: the dog name.
* @age: the dog age.
* @owner: the dog owner.
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
