#ifndef DOG_H
#define DOG_H

int _putchar(char c);

/**
 * structure dog - creates profile with name, age, owner elements
 * @name: dog name
 * @age: god age
 * @owner: dog owner
 *
 * Description: creates profile withname, age, owner elements
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner)
void print_dog(struct dog *d)
dog_t *new_dog(char *name, float age, char *owner)
void free_dog(dog_t *d)
