#include "main.h"

/**
 * jack_bauer - prints every minute of the day from 00:00 to 23:59
 * Return: 0
 */

int jack_bauer(void)
{
	int mins;
	int hours;

	for (hours = 0; hours < 24; hours++)
	{
		for (mins = 0; mins < 60; mins++)
		{
			_putchar((hours / 10) + '0');
			_putchar((hours % 10) + '0');
			_putchar(':');
			_putchar((mins / 10) + '0');
			_putchar((mins % 10) + '0');
			_putchar('\n');
		}
	}

	return (0);
}
