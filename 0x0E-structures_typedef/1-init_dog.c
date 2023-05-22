#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - A fuction that initializes a variable of struct dog
 * @d: poinetr argument passed from main
 * @name: a string 'name'
 * @age: a float 'age'
 * @owner: a string 'owner'
 * Return: returns nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
