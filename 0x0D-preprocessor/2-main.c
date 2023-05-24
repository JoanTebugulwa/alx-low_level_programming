#include <stdio.h>

/**
 * main - a program that prints a name of the file it was compiled form
 * Return: returns 0 (success)
 */
int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
