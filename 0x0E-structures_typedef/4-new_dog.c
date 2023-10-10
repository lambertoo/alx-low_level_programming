#include "dog.h"

/**
 * new_dog - creates and stores dog object
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the object of the dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *brand_new_dog = malloc(sizeof(dog_t));

	if (brand_new_dog == NULL)
		return (NULL);

	brand_new_dog->name = name;
	brand_new_dog->age = age;
	brand_new_dog->owner = owner;

	return (brand_new_dog);
}
