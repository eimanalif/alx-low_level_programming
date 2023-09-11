#include"dog.h"
#include<stdio.h>


/**
 *print_dog - function that prints a struct dog
 *Definition:function that prints a struct dog
 *@d:pointer
 *Return: 0 or NULL
 */


void print_dog(struct dog *d)
{
	if (d->name == NULL || d->owner == NULL)
	{
		printf("nil");
	}
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age = %f\n", d->age);
		printf("Owner = %s\n", d->owner);
	}
}
