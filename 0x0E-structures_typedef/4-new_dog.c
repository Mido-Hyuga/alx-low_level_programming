#include "dog.h"

/**
* new_dog - create now dog
* @name: dog name
* @age: dog age
* @owner: dog owner
* Return: dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *d;
	int i = 0, len_name, len_owner;

	d = malloc(sizeof(struct dog));
	if (d == 0 || !(name) || !(owner))
	{
		free(d);
		return (0);
	}
	while (*(name + i))
		i++;
	len_name = i;
	i = 0;
	while (*(owner + i))
		i++;
	len_owner = i;
	(*d).name = malloc(len_name + 1);
	(*d).owner = malloc(len_owner + 1);
	if (!((*d).name) || !((*d).owner))
	{
		free(d);
		free((*d).name);
		free((*d).owner);
		return (0);
	}
	for (i = 0; i < len_name; i++)
		(*d).name[i] = name[i];
	(*d).name[i] = 0;
	(*d).age = age;
	for (i = 0; i < len_owner; i++)
		(*d).owner[i] = owner[i];
	(*d).owner[i] = 0;
	return (d);
}
