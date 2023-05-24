#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - A function that prints name.
 * @name: pointer to name.
 * @f: function pointer.
 *
 * return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
