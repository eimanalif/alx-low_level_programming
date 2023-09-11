#include"dog.h"


/**
 *init_dog -  function that initialize a variable of type struct dog
 *Description: function that initialize a variable of type struct dog
 *@d:pointer to struct dog
 *@name:array of string
 *@age:float
 *@owner:array of string
 *Return:void
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
