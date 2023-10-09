#include "dog.h"

/**
 * init_dog - initialise dog object
 * @d: dog structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *mine = d;

	mine->name = name;
	mine->age = age;
	mine->owner = owner;
}
