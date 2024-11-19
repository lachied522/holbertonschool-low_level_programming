#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_char - prints char from va_list
 * @ap: va_list
 */
void print_char(va_list ap)
{
	int c = va_arg(ap, int);

	printf("%c", c);
}

/**
 * print_string - prints string from va_list
 * @ap: va_list
 */
void print_string(va_list ap)
{
	char *s = va_arg(ap, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", s);
}

/**
 * print_float - prints float from va_list
 * @ap: va_list
 */
void print_float(va_list ap)
{
	double f = va_arg(ap, double);

	printf("%f", f);
}

/**
 * print_int - prints int from va_list
 * @ap: va_list
 */
void print_int(va_list ap)
{
	int i = va_arg(ap, int);

	printf("%i", i);
}

/**
 * print_all - prints args
 * @format: list of data types of arguments
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	function_map_t Function_map[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string}
	};

	va_list ap;
	unsigned int i;
	unsigned int j;
	char *separator;

	va_start(ap, format);

	i = 0;
	separator = "";
	while (format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == Function_map[j].c)
			{
				printf("%s", separator);
				Function_map[j].f(ap);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}

	printf("\n");

	va_end(ap);
}
