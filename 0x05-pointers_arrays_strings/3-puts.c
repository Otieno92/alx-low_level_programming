#include "main.h"

/**
 * _puts - prints a string followed by new line
 * @str: variable
 * Return: void
 */
void _puts(char *str)
{
	int y = 0;

	while (*(str + y))
	{
		_putchar(*(str + y));
		y++;
	}
	_putchar('\n');
}
