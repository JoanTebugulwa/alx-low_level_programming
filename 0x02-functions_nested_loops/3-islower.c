#include "main.h"

/**
 * _islower - A function that checks for lowercase
 * @k: single letter input
 * Return: 1 if int k is lowercase, 0 if otherwise
 */
int _islower(int k)
{
if (k >= 'a' && k <= 'z')
return (1);
else
return (0);
}
