#include <unisstd.h>

/**
 * _putchar - writes the  character c to stdout
 * @: the character to print
 *
 * Return: On success i.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
