#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * printf_char - Printfs a char form var args
 * @list: va_list to print from
 *
 * Return: void
 */
void printf_char(va_list list)
{
	printf("%c", (char) va_arg(list, int));
}

/**
 * printf_int - prints an int from va args
 *
 * @list: va_list to print from
 *
 * Return: void
 */
void printf_int(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * printf_float - prints a float from va args
 *
 * @list: va_list to print from
 *
 * Return: void
 */
void printf_float(va_list list)
{
	printf("%f", (float) va_arg(list, double));
}


/**
 * print_string - prints a string from var args
 *
 * @list: va_list to print from
 *
 * Return: void
 */
void print_string(va_list list)
{
	char *str = va_arg(list, char*);

	while (str != NULL)
	{
		printf("%s", str);
		return;
	}
	printf("(nil)");
}

/**
 * print_all - prints anything
 *
 * @format: string containing type of information for args
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	const char *ptr;
	va_list list;
	funckey key[4] = { {printf_char, 'c'}, {printf_int, 'i'},
		{printf_float, 'f'}, {print_string, 's'} };
	int keyind = 0, notfirst = 0;

	ptr = format;
	va_start(list, format);
	while (format != NULL && *ptr)
	{
		if (key[keyind].spec == *ptr)
		{
			if (notfirst)
				printf(", ");
			notfirst = 1;
			key[keyind].f(list);
			ptr++;
			keyind = -1;
		}
		keyind++;
		ptr += keyind / 4;
		keyind %= 4;
	}
	printf("\n");

	va_end(list);
}
