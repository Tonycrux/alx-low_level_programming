#include "holberton.h"

/**
 * print_numbers - For printing numbers
 * Return: 0
 */

void print_numbers(void)
{
	for (char i = 0; i <= 9; i++)
	{
		_putchar ('0' + i);
	}
	_putchar ('\n');

}
