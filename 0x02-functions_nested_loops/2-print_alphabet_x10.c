#include "main.h"
/**
 * print_alphabet_x10 -  Print 10 times the alphabet
 *
 * Return: x10 a-z
 */
void print_alphabet_x10(void)
{
char l, co;
co = 0;

while (co < 10)
{
for (l = 'a'; l <= 'z'; l++)
{
_putchar(l);
}
co++;
_putchar('\n');
	}
}
