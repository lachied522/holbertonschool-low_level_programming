#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS

#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);

/**
 * struct function_map - maps character to function pointer
 * @c: character
 * @f: function pointer
 */
typedef struct function_map
{
	char c;
	void (*f)(va_list ap);
} function_map_t;

#endif
