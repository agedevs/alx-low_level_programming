#ifndef DOG_H
#define DOG_H

/*
 * File: dog.h
 * Auth: Gbolahan Emmanuel Akande
 * Desc: Header file that defines a new type struct dog.
 */

/**
 * struct dog - Struct for dog
 * @name: The name of the dog
 * @age: Age of the dog
 * @owner: The dog owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef struct for dog to dog_t
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);

#endif
