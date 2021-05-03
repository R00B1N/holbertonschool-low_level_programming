#include "dog.h"
#include <stdio.h>
/**
 * print_dog -  print the name of the dog
 * @d: pointer to the structure
 *
 * Return: No return
 */
void print_dog(struct dog *d)
{
	if (d == '\0')
		return;
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name ? d->name :
	       "(nil)", d->age, d->owner ? d->owner : "(nil)");
}
