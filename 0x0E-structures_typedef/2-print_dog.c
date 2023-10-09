#include "dog.h"

/**
 * print_dog - print details of dog objects
 * @d: pointer to the dog object
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	struct dog *mine = d;

	if (mine == NULL)
		return;
	if (mine->name == NULL)
		printf("Name: (nil)\n");
	if (mine->age == 0)
		printf("Age: (nil)\n");
	if (mine->owner == NULL)
		printf("Owner: (nil)\n");

	printf("Name: %s\n", mine->name);
	printf("Age: %.6f\n", mine->age);
	printf("Owner: %s\n", mine->owner);
}
