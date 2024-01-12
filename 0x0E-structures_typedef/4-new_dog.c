#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_strcpy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - This function checks the length of a string
 * @s: The character to be checked
 *
 * Return: Returning value i
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

/**
 * _strcpy - This is a function that copies the string
 * @dest: destinaton
 * @src: source
 * Return: non 0.
 */
char *_strcpy(char *dest, char *src)
{
	int n = 0;

	while (n >= 0)
	{
		*(dest + n) = *(src + n);
		if (*(src + n) == '\0')
		{
			break;
		}
		n++;
	}
	return (dest);
}

/**
 * new_dog - Creates a new dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: The new struct dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_new;

	if (name == NULL || age < 0 || owner == NULL)
	{
		return (NULL);
	}

	dog_new = malloc(sizeof(dog_t));
	if (dog_new == NULL)
	{
		return (NULL);
	}

	dog_new->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dog_new->name == NULL)
	{
		free(dog_new);
		return (NULL);
	}

	dog_new->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dog_new->owner == NULL)
	{
		free(dog_new->name);
		free(dog_new);
		return (NULL);
	}

	dog_new->name = _strcpy(dog_new->name, name);
	dog_new->age = age;
	dog_new->owner = _strcpy(dog_new->owner, owner);

	return (dog_new);
}
