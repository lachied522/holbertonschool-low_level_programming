#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct function_map
{
	char c;
	void (*f)(va_list ap);
} function_map_t;

void print_char(va_list ap)
{
	int c = va_arg(ap, int);
	printf("%c", c);
}

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

void print_float(va_list ap)
{
	double f = va_arg(ap, double);
	printf("%f", f);
}

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

	va_start(ap, format);
	
	i = 0;

	while (format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == Function_map[j].c)
			{
				Function_map[j].f(ap);
				break;
			}
			j++;
		}
		i++;
	}

	printf("\n");

	va_end(ap);
}
