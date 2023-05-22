#ifndef DOG_H
#define DOG_H

int _putchar(char c);

/**
 * struct dog - name, age, owner elements of the dog
 * @name: dog name
 * @age: dog  age
 * @owner: dog owner
 *
 * Description: creates profile with name, age, owner elements
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
