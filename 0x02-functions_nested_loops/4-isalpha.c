#include "main.h"
/**
 * _isalpha -A function that checks for alphabetic character
 * @k: single letter input
 * Return: 1 if k is a letter, 0 otherwise
 */
int _isalpha(int k)
{
if (((k >= 'a') && (k <= 'z')) || ((k >= 'A') && (k = 'Z')))
return (1);
else
return (0);
}
