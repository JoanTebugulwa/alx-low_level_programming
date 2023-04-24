#include <stdio.h>
/**
 * main: Program that prints the size of various types on the computer
 * Return: always 0 success
 */
int main(void)
{
	printf("\"size of a char: %ld byte(s)\n", sizeof(long unsigned int));
	printf("\"size of an int: %ld byte(s)\n", sizeof(long unsigned int));
	printf("\"size of long int: %ld byte(s)\n", sizeof(long unsigned int));
	printf("\"size of a long long int: %ld byte(s)\n", sizeof(long long unsigned int));
	printf("\"size of a floa: %ld byte(s)\n", sizeof(float));
	return (0);
}
