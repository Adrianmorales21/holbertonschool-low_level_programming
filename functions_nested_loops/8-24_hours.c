#include "main.h"
/**
 * jack_bauer-24 hours
 * Return: always (Success)
 */
void jack_bauer(void)
{
	int m, h;

	h = 0;
	while (h < 24)
	{
		m = 0;
		while (m < 60)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
			h++;
		}
		m++;
	}
}
