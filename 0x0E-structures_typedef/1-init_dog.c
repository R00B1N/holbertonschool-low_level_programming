#include "dog.h"
/**
 * init_dog -  initialize a variable of type struct dog.
 * @d: values of another dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The name of the dog's owner
 * Return: No return
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == '\0')
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
