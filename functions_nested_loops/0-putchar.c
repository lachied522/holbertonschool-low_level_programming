#include "main.h"

/**
 * main - Prints _putchar to stdout
 * Return: 0
 */

int main(void)
{
	char *toPrint;
	char *p;

	toPrint = "_putchar\n";

	for (p = toPrint; *p != '\0'; p++)
	{
		_putchar(*p);
	}
	return (0);
}
