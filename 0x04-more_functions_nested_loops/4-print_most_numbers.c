#include "holberton.h"

/**
 *more_numbers - prints numbers
 * Return:0
 */

void more_numbers(void)
{
	char n = 0;

	while (n <= 9)
	{
		if (n != 2 && n != 4)
		{
			_putchar('0' + n);
			n++;
		}
	}
	_putchar('\n');

}
